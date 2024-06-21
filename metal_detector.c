/*
    Project name : ESP8266 Metal Detector
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-metal-detector
*/

const int metalDetectorPin = D2; // Digital pin connected to the metal detector coil

void setup() {
  pinMode(metalDetectorPin, INPUT_PULLUP); // Set the pin as input with internal pull-up resistor
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the metal detector sensor
  int sensorValue = digitalRead(metalDetectorPin);

  // Print the sensor value to the Serial Monitor
  if (sensorValue == LOW) {
    Serial.println("Metal Detected");
  } else {
    Serial.println("No Metal Detected");
  }

  delay(1000); // Delay before next reading
}
