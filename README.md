# ESP8266 Metal Detector Project

#### Project Overview
This project showcases how to build a simple metal detector using an ESP8266 microcontroller. The metal detector detects the presence of metal objects by monitoring changes in the sensor's digital output signal. This can be useful for various applications where metal detection is required.

#### Components Needed
- **ESP8266 Microcontroller**
- **Metal Detector Coil (inductive sensor)**
- **Jumper Wires**

#### Block diagram

#### Circuit Setup
1. **Connecting the Metal Detector Coil to ESP8266:**
   - Connect the digital output pin of the metal detector coil to GPIO pin D2 on the ESP8266.
   - Ensure proper power (VCC) and ground (GND) connections between the ESP8266 and the metal detector coil.
   - Use an internal pull-up resistor on the GPIO pin to maintain a stable state when the sensor is not active.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - The Serial Monitor will display whether metal is detected ("Metal Detected") or not ("No Metal Detected").
   - Bring a metal object close to the metal detector coil to observe changes in detection status.

#### Applications
- **Security Screening:** Detect metal objects in security checkpoints.
- **Treasure Hunting:** Use for recreational metal detecting.
- **Industrial Applications:** Monitor for metal presence in machinery or conveyor belts.

#### Notes
- **Sensor Sensitivity:** Adjust the sensitivity of the metal detector coil based on the distance and size of metal objects.
- **Digital Output:** The metal detector coil provides a digital signal (`LOW` or `HIGH`) based on whether metal is detected.
- **Internal Pull-up Resistor:** Ensures stable readings when the sensor output is not connected to anything.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Metal Detector](https://projectslearner.com/learn/esp8266-metal-detector)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner