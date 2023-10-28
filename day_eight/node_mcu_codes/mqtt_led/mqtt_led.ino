#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// WiFi
const char* ssid = "Airtel_#roy_509";
const char* password = "Pratik@982211";
// MQTT Broker
const char* mqtt_server = "broker.mqtt-dashboard.com";

void callback(char *topic, byte *payload, unsigned int length);

WiFiClient espClient;
PubSubClient client(espClient);

int LED = D3;
bool ledState = false;

void setup_wifi();
void reconnect();

void setup() {
    // Set software serial baud to 115200;
    Serial.begin(115200);
    delay(1000); // Delay for stability

    setup_wifi();
    
    // Setting LED pin as output
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);  // Turn off the LED initially

    // Connecting to an MQTT broker
    client.setServer(mqtt_server, 1883);
    client.setCallback(callback);
}


// This functions reconnects your ESP8266 to your MQTT broker
// Change the function below if you want to subscribe to more topics with your ESP8266 
void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect

    if (client.connect("ESP8266Client")) {
      Serial.println("connected");  
      // Subscribe or resubscribe to a topic
      // You can subscribe to more topics
      client.subscribe("led/roy");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup_wifi() {
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("WiFi connected - ESP IP address: ");
  Serial.println(WiFi.localIP());
}

void callback(char *topic, byte *payload, unsigned int length) {
    Serial.print("Message arrived in topic: ");
    Serial.println(topic);
    Serial.print("Message: ");
    String message;
    for (int i = 0; i < length; i++) {
        message += (char) payload[i];  // Convert *byte to string
    }
    Serial.println(message);

  if((String)topic=="led/roy")
  {
    Serial.println("LED mode change");
    if (message == "on") {
        Serial.println("ON");
        digitalWrite(LED, HIGH);  // Turn on the LED
    }
    else if (message == "off") {
        Serial.println("OFF");
        digitalWrite(LED, LOW); // Turn off the LED
    }
  }
    Serial.println();
    Serial.println("-----------------------");
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }

  if(!client.loop())
    client.connect("ESP8266Client");
  
  delay(100);
}
