# Smart Parking System Project

In congested cities, finding car parking is a major issue due to the increasing number of vehicles and limited parking spaces. This project aims to address this problem by designing a Smart Parking System. The system provides real-time information about parking slot availability, minimizing the time wasted in searching for parking spaces and providing a convenient parking experience.

## Components Used

- LCD 16x2 Display x 1
- Arduino UNO x 1
- ESP8266 WiFi Module x 1
- AK9753 IR Sensor x 4
- Blynk App-Mobile Device for accessing or monitoring the slots x 1

 ## Circuit Diagram
 
![IMG_20210828_181628_08282021181706](https://github.com/RAHUL-R10/Smart_Parking_System/assets/85721390/de138b24-0fa2-4919-b7a4-43310bf3b9cc)

## Setup

1. Install Arduino IDE: Download and install the Arduino IDE, an open-source software program that allows users to write and upload code to the Arduino board.

2. Connect the Components: Connect the LCD, Arduino UNO, ESP8266 WiFi Module, and the four AK9753 IR Sensors as per the circuit diagram.

3. Upload the Code: Upload the Arduino code to the Arduino UNO using the Arduino IDE.

4. Install Blynk App: Install the Blynk application on your mobile device. Blynk is a platform that allows easy integration of IoT devices and enables real-time monitoring and control.

## Working Principle

The Smart Parking System consists of four parking slots, each equipped with an IR sensor to detect the presence of a car. The IR sensors are connected to the Arduino UNO. When a car is parked in a slot, the IR sensor sends a signal to the Arduino, which then communicates with the ESP8266 WiFi Module.

The ESP8266 WiFi Module sends the parking slot status to the Blynk application. In the Blynk app, users can monitor the availability of parking slots in real-time. Each slot's status (occupied or available) is displayed on the Blynk app.

Additionally, there is an LCD display at the entrance of the parking area that shows the current status of all the slots. It indicates how many slots are filled and how many are empty, helping drivers quickly find available parking spaces.

## How to Use

1. Open the Blynk App: Open the Blynk application on your mobile device.

2. Monitor Parking Status: In the Blynk app, you can monitor the parking status and see which slots are available for parking.

3. Park Your Car: When you find an available slot, park your car in that space.

4. Status Display: The LCD display at the entrance of the parking area will show the overall status of all parking slots, indicating the number of empty and filled slots.

## Installation

1. Clone the repository.

2. Upload the Arduino sketch to the Arduino UNO.

3. Set up the hardware components as described in the circuit diagram.

4. Install the Blynk application on your mobile device.

5. Power on the system and access the Blynk app to monitor parking slot availability.

