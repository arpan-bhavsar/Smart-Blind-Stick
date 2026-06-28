\# Smart Stick for Visually Impaired



\[cite\_start]An Internet of Things (IoT) project designed to assist visually impaired individuals in navigating safely by detecting obstacles in their path and providing real-time feedback\[cite: 1, 9, 21].



\## 👥 Team Members

\* \[cite\_start]\*\*Chauhan Vraj K.\*\* (216450307015) \[cite: 3]

\* \[cite\_start]\*\*Soni Vraj J.\*\* (216450307022) \[cite: 4]

\* \[cite\_start]\*\*Vegad Keval V.\*\* (216450307043) \[cite: 5]

\* \[cite\_start]\*\*Bhavsar Arpan J.\*\* (216450307046) \[cite: 6]



\[cite\_start]\*\*Guided By:\*\* Mrs. Prerna Gupta \[cite: 7]  

\[cite\_start]\*\*Subject:\*\* Internet of Things (4360703) \[cite: 9]



\---



\## 📝 Introduction

\[cite\_start]Visually impaired individuals face daily challenges when navigating busy streets filled with vehicles and unexpected obstacles\[cite: 18, 19]. \[cite\_start]This \*\*Smart Stick\*\* mitigates these risks by scanning the path ahead using integrated sensors\[cite: 20]. \[cite\_start]It alerts the user via auditory and haptic feedback, allowing them to take necessary precautions and prevent injuries\[cite: 21, 22].



\## ⚙️ How It Works

1\. \[cite\_start]The system continually scans the path using an \*\*HC-SR04 Ultrasonic Sensor\*\* (similar to an ultrasonic range finder)\[cite: 24, 28].

2\. \[cite\_start]When an obstacle is detected within the threshold zone, the \*\*buzzer\*\* starts beeping and a \*\*Red LED\*\* turns on\[cite: 25].

3\. \[cite\_start]The user hears the alert and can safely navigate around the hazard\[cite: 26].

4\. \[cite\_start]Real-time distance measurements can also be viewed in centimeters on the Arduino Serial Monitor\[cite: 29].



\## 🛠️ Components Used

\* \[cite\_start]Arduino UNO \[cite: 32]

\* \[cite\_start]HC-SR04 Ultrasonic Sensor \[cite: 36]

\* \[cite\_start]Piezo Buzzer \[cite: 37]

\* \[cite\_start]2 LEDs (Green \& Red) with a 220-Ohm resistor \[cite: 38]

\* \[cite\_start]9V DC Battery \& Battery Cap \[cite: 39, 41]

\* \[cite\_start]Breadboard \& Jumper Wires \[cite: 35, 34]

\* \[cite\_start]Barrel Connector Cable \& Switch \[cite: 33, 40]



\---



\## 💻 Source Code Preview

\[cite\_start]The project utilizes the `NewPing.h` library for accurate, lag-free distance polling\[cite: 44].



```cpp

\#include <NewPing.h>



\#define trigPin 3

\#define echoPin 4

\#define BUZZER\_PIN 13

\#define TX\_PIN\_COCO A0

\#define MAX\_DISTANCE 35



NewPing sonar(trigPin, echoPin);

// ... (Your complete .ino code file goes here)

