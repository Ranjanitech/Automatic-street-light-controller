# Automatic-street-light-controller

## 📌 Project Overview
The Automatic Street Light Controller is an energy-efficient automation system that turns street lights ON and OFF automatically based on ambient light conditions. This system helps reduce manual effort and saves electricity by ensuring lights operate only when required.

## 🎯 Objective
To design and implement an automatic lighting system that conserves energy by switching street lights ON during night-time and OFF during day-time using a light-dependent sensor.

## 🛠️ Components Used
- ESP32 / Arduino Microcontroller  
- LDR (Light Dependent Resistor)  
- Relay Module  
- LED Bulb  
- Resistors  
- Power Supply  

## ⚙️ Working Principle
- The LDR continuously senses ambient light intensity.
- The microcontroller reads the analog value from the LDR.
- A predefined **threshold value** is used to determine day or night.
- If light intensity is below the threshold (dark condition), the relay is activated and the street light turns ON.
- If light intensity is above the threshold (bright condition), the relay is deactivated and the street light turns OFF.

## 💻 Software & Tools
- Arduino IDE  
- Embedded C Programming  

## 🌱 Advantages
- Saves up to **40% energy**
- Fully automatic operation
- Low cost and easy to implement
- Reduces human intervention

## 🧩 Challenges Faced
- Selecting the correct threshold value for accurate light detection
- Interfacing the LDR sensor with the microcontroller
- Ensuring stable relay switching

## 💡 What I Learned
- Working with sensors and actuators
- Embedded C programming for real-time systems
- Basics of automation and energy-efficient system design
- Hardware-software integration

## 🚀 Applications
- Street lighting systems
- Parking areas
- Campus and industrial lighting
- Smart city projects

## 📈 Future Enhancements
- IoT-based monitoring and control
- Solar-powered operation
- Motion sensor integration for enhanced efficiency
