# IoT_workshop_VIT

### Session 1: Arduino, Sensors and Data Acquisition
### Session 2: Node MCU / ESP8266 in IoT
### Session 3: Application of MQTT using Node MCU
### Session 4: AI Foundation with IoT and Case Studies EdgeAI

## Session 1 Agenda: Theory

 - IoT tech stack
 - IoT protocols, serial communication
 - Arduino architecture and pins
 - What is an arduino IDE and Setup
 - Blinking LED, Digital Input, Digital Output, Internal pull and noise
 - Tinkercad simulations 
 - Conditional Statements, UART, Debouncing, Variables, Arrays
 - Powering Arduino

## Session 1 Agenda: Hands-on

 - Sensors and Actuators
 - Blinking LED
 - ADC 
 - DAC 
 - PWM Vs Analogy 
 - Interrupt with a button
 - Reading data from sensors: Temperature, Humidity, Ultrasonic, Light and displaying on serial monitor
 - Motor status - UART 
 - RFID

## Session 2 Agenda: Theory

- IoT tech stack
- IoT protocols, serial communication
- NodeMCU/ESP8266 architecture and pins
- Sensors and Actuators
- How to setup arduino IDE for NodeMCU? check [here](Session_2/Arduino_IDE_setup.docx)
- Brief on HTTP protocol
- Intro to circuit.io diagramming tool
- Intro to Nodered
- Discuss about online simulation tools: tinkercad and wokwi

## Session 2 Agenda: Hands-on

- Building a simple circuit with nodemcu on circuit.io
- Blinking LED on nodemcu
- Using the serial monitor and Serial reading
- Button controlled LED and Blink rate control
- Wifi connection from NodeMCU and LED control from remote web server
- Sending simulated data to cloud and creating a dashboard on node-red
- Display data on UI dashboard

## Session 3 Agenda: Theory

- Refresher on previous session.
- Intro to MQTT
- Components of MQTT
- Intro to Mosquitto Broker
- Library setup on Arduino IDE
- MQTT callback and QoS in MQTT
- Different applications of MQTT
- Mosquitto Broker setup on Windows


## Session 3 Agenda: Hands-on

- MQTT simulation on ubuntu/windows.
- QOS replication on node-red/ubuntu/windows
- Nodemcu MQTT setup.
- Code Explanation.
- Data logging using MQTT in node-red
- LED control using MQTT. 
- Create a SCADA dashboard on Node-red
- Integrate MQTT sensor data with IBM watson
- Discuss MQTT based Node-MCU projects from https://www.hackster.io/

## Session 4 Agenda: Theory

- Intro to python, Python data types, Python list 
- List operation function, Conditional statements, For loop, Functions
- Numpy, Pandas, Sci-Kit Learn
- Neural networks: Intuitive understanding of NN (comparison to brain) 
- Backpropagation algorithm (how to train NN) 
- Unsupervised Learning - KNN
- Train set , test set 
- Multi class training

## Session 4 Agenda: Hands-on

- What is EdegAI?
- Different kinds of EdgeAI models abailable for IoT
- Why EdgeAI?
- Federated Learning
- Quantization and why do we need it.
- Various industry wide use cases with EdgeAI.
- Training an EdgeAI model and deploying on STM32 Arm Cortex M4 microcontroller.

## Software Stack:

- Preferred OS (ubuntu 18.04 or above), can use virtual box as well.
- Arduino IDE
- Mosquitto MQTT broker, check [here](Session_3/MQTT_simulation_guide.md)
- Node-js, check [here](Session_2/node_red_install_guide.md)
- Node-red, check [here](Session_2/node_red_install_guide.md)
- Circuit.io online
- Platformio (optional)
- Edge Impulse

## Hardware:

- Node-MCU x 1
- Arduino Uno x 1
- USB data cable x 1
- LEDs x 1
- Buttons x 1
- Mini Breadboards x 1
- Jumpers x 4 each (M2F, F2F, M2M)
- Potentiometer small(optional) x 1
- Temperature Sensor(DHT 11, optional) x 1
