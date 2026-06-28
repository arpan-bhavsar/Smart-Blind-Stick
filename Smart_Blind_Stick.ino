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
  // Measure the distance using the ultrasonic sensor
  unsigned int distance = sonar.ping_cm();

  // Print the distance to the Serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is within the specified range
  if (distance > 0 && distance < MAX_DISTANCE) {
    // Turn on the buzzer and Red LED
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(TX_PIN_COCO, LOW);
  } else {
    // Turn off the buzzer and keep Green LED on / Red LED off
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(TX_PIN_COCO, HIGH);
  }
  
  // Delay for a short duration to avoid rapid changes
  delay(100);
}