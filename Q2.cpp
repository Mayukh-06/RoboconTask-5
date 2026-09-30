int redPin = 3;
int yellowPin = 5;
int greenPin = 6;
int potPin = A4;
int trig = 9;
int echo = 10;

long duration;
int distance;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(potPin, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;

  int potVal = analogRead(potPin);
  int warningDist = map(potVal, 0, 1023, 10, 50);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm | Set Warning Dist: ");
  Serial.print(warningDist);
  Serial.print(" cm | Status: ");

  if (distance > warningDist) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
    Serial.println("The robot is at a safe distance.");
  } 
  else if (distance > warningDist / 2.0) {
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
    Serial.println("The robot is getting close to the obstacle.");
  } 
  else {
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    Serial.println("The robot is dangerously close to the obstacle.");
  }

  
}