# Smart Stick for Visually Impaired

An Internet of Things (IoT) project designed to assist visually impaired individuals in navigating safely by detecting obstacles in their path and providing real-time feedback[cite: 1].

---

## 📝 Introduction
Visually impaired individuals face daily challenges when navigating busy streets filled with vehicles and unexpected obstacles. This **Smart Stick** mitigates these risks by scanning the path ahead using integrated sensors. It alerts the user via auditory and haptic feedback, allowing them to take necessary precautions and prevent injuries.

## ⚙️ How It Works
1. The system continually scans the path using an **HC-SR04 Ultrasonic Sensor**.
2. When an obstacle is detected within the threshold zone (less than 35 cm), the **buzzer** starts beeping and the alert indicator triggers.
3. The user hears the alert and can safely navigate around the hazard.
4. Real-time distance measurements can be viewed in centimeters on the Arduino Serial Monitor.

## 🛠️ Components Used
* Arduino UNO
* HC-SR04 Ultrasonic Sensor
* Piezo Buzzer
* 2 LEDs (Green & Red) with a 220-Ohm resistor
* 9V DC Battery & Battery Cap
* Breadboard & Jumper Wires
* Barrel Connector Cable & Switch

---

## 💻 Source Code Preview
The project utilizes the `NewPing.h` library for accurate, lag-free distance polling.

```cpp
#include <NewPing.h>

#define trigPin 3
#define echoPin 4
#define BUZZER_PIN 13
#define TX_PIN_COCO A0     
#define MAX_DISTANCE 35

NewPing sonar(trigPin, echoPin);

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(TX_PIN_COCO, OUTPUT); 
}

void loop() {
  unsigned int distance = sonar.ping_cm();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance < MAX_DISTANCE) {
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(TX_PIN_COCO, LOW);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(TX_PIN_COCO, HIGH);
  }
  delay(100);
}
