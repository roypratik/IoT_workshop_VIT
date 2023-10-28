# IoT_workshop_VIT

### Day Seven: Node MCU / ESP8266 in IoT
### Day Eight: Application of MQTT using Node MCU

## Day seven Agenda: Theory

- IoT tech stack
- IoT protocols, serial communication
- NodeMCU/ESP8266 architecture and pins
- Sensors and Actuators
- How to setup arduino IDE for NodeMCU? check [here](day_seven/Arduino_IDE_setup.docx)
- Brief on HTTP protocol
- Intro to circuit.io diagramming tool
- Intro to Nodered
- Discuss about online simulation tools: tinkercad and wokwi

## Day seven Agenda: Hands-on

- Building a simple circuit with nodemcu on circuit.io
- Blinking LED on nodemcu
- Using the serial monitor and Serial reading
- Button controlled LED and Blink rate control
- Wifi connection from NodeMCU and LED control from remote web server
- Sending simulated data to cloud and creating a dashboard on node-red
- Display data on UI dashboard

## Day eight Agenda: Theory

- Refresher on previous session.
- Intro to MQTT
- Components of MQTT
- Intro to Mosquitto Broker
- Library setup on Arduino IDE
- MQTT callback and QoS in MQTT
- Different applications of MQTT
- Mosquitto Broker setup on Windows


## Day eight Agenda: Hands-on

- MQTT simulation on ubuntu/windows.
- QOS replication on node-red/ubuntu/windows
- Nodemcu MQTT setup.
- Code Explanation.
- Data logging using MQTT in node-red
- LED control using MQTT. 
- Create a SCADA dashboard on Node-red
- Discuss MQTT based Node-MCU projects from https://www.hackster.io/

## Software Stack:

- Preferred OS (ubuntu 18.04 or above), can use virtual box as well.
- Arduino IDE
- Mosquitto MQTT broker, check [here](day_eight/MQTT_simulation_guide.md)
- Node-js, check [here](day_seven/node_red_install_guide.md)
- Node-red, check [here](day_seven/node_red_install_guide.md)
- Circuit.io online
- Platformio (optional)

## Hardware:

- Node-MCU x 1
- USB data cable x 1
- LEDs x 1
- Buttons x 1
- Mini Breadboards x 1
- Jumpers x 4 each (M2F, F2F, M2M)
- Potentiometer small(optional) x 1
- Temperature Sensor(DHT 11, optional) x 1
