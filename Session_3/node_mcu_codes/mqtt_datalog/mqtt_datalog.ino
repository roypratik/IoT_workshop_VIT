/* MIT License

Copyright (c) 2024 Pratik Roy

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <DHT11.h>

// WiFi
const char *ssid = "Airtel_#roy_509";
const char *password = "Pratik@982211";
// MQTT Broker
const char *mqtt_server = "broker.mqtt-dashboard.com";
WiFiClient espClient;
PubSubClient client(espClient);

DHT11 dht11(D4);

void setup_wifi();

void setup()
{
  Serial.begin(115200);

  setup_wifi();
  client.setServer(mqtt_server, 1883);
}

void setup_wifi()
{
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("WiFi connected - ESP IP address: ");
  Serial.println(WiFi.localIP());
}

// This functions reconnects your ESP8266 to your MQTT broker
// Change the function below if you want to subscribe to more topics with your ESP8266
void reconnect()
{
  // Loop until we're reconnected
  while (!client.connected())
  {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect

    if (client.connect("ESP8266Client"))
    {
      Serial.println("connected");
      // Subscribe or resubscribe to a topic
      // You can subscribe to more topics
    }
    else
    {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void loop()
{
  if (!client.connected())
  {
    reconnect();
  }
  if (!client.loop())
    client.connect("ESP8266Client");

  // Attempt to read the temperature and humidity values from the DHT11 sensor.
  int temperature = dht11.readTemperature();

  // If using ESP32 or ESP8266 (xtensa architecture), uncomment the delay below.
  // This ensures stable readings when calling methods consecutively.
  delay(50);

  int humidity = dht11.readHumidity();

  if (temperature != DHT11::ERROR_CHECKSUM && temperature != DHT11::ERROR_TIMEOUT &&
      humidity != DHT11::ERROR_CHECKSUM && humidity != DHT11::ERROR_TIMEOUT)
  {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    static char temp_v[7];
    dtostrf(temperature, 6, 2, temp_v);

    client.publish("temp_roy982211", temp_v);

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    static char humi_v[7];
    dtostrf(humidity, 6, 2, humi_v);

    client.publish("humi_roy982211", humi_v);
  }
  else
  {
    if (temperature == DHT11::ERROR_TIMEOUT || temperature == DHT11::ERROR_CHECKSUM)
    {
      Serial.print("Temperature Reading Error: ");
      Serial.println(DHT11::getErrorString(temperature));
    }
    if (humidity == DHT11::ERROR_TIMEOUT || humidity == DHT11::ERROR_CHECKSUM)
    {
      Serial.print("Humidity Reading Error: ");
      Serial.println(DHT11::getErrorString(humidity));
    }
  }

  delay(1000);
}
