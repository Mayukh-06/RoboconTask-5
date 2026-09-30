#include <Arduino.h>

int redPin = 6;
int yellowPin = 5;
int greenPin = 3;
int potPin = A4;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  int potVal = analogRead(potPin); 
  
  if (potVal >= 0 && potVal <= 340) {
    int brightness = map(potVal, 0, 340, 0, 255);
    analogWrite(greenPin, brightness);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  } 
  else if (potVal >= 341 && potVal <= 680) {
    int brightness = map(potVal, 341, 680, 0, 255);
    digitalWrite(greenPin, LOW);
    analogWrite(yellowPin, brightness);
    digitalWrite(redPin, LOW);
  } 
  else {
    int brightness = map(potVal, 681, 1023, 0, 255);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    analogWrite(redPin, brightness);
  }

}