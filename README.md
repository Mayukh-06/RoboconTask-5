# Assignment 5 : 

Q1. You are designing a simple lighting control system for a robotic vehicle using an Arduino. The system has one potentiometer that controls the brightness of three LEDs — Green, Yellow, and Red.

Your task is to connect the potentiometer and three LEDs to the Arduino and write a program that reads the value of the potentiometer and controls the LEDs according to the following conditions:

When the potentiometer value is between 0 and 340:

Green LED should be ON.

Yellow LED should be OFF.

Red LED should be OFF.

The Green LED should have brightness proportional to the potentiometer value.

When the potentiometer value is between 341 and 680:

Green LED should be OFF.

Yellow LED should be ON.

Red LED should be OFF.

The Yellow LED should have brightness proportional to the potentiometer value within this range.

When the potentiometer value is between 681 and 1023:

Green LED should be OFF.

Yellow LED should be OFF.

Red LED should be ON.

The Red LED should have brightness proportional to the potentiometer value within this range.

Display the potentiometer value and the current LED state on the Serial Monitor.

Simulation : 

<img width="936" height="516" alt="Screenshot 2026-10-03 123222" src="https://github.com/user-attachments/assets/e975c785-a41a-4a9e-8a5d-474e777e619d" />



Q2. You are designing a simple warning system for a robotic vehicle using an Arduino. The robot has one ultrasonic sensor to detect obstacles and one potentiometer to adjust the warning distance. Three LEDs — Green, Yellow, and Red — are used to indicate how close the robot is to an obstacle.

Your task is to connect the ultrasonic sensor, potentiometer, and three LEDs to the Arduino and write a program that reads the distance from the ultrasonic sensor and the value of the potentiometer and controls the LEDs according to the following conditions:

Use the potentiometer to set a warning distance between 10 cm and 50 cm.

When the obstacle is farther than the warning distance:

Green LED should be ON.

Yellow LED should be OFF.

Red LED should be OFF.

The robot is at a safe distance.

When the obstacle is within the warning distance but more than half of the warning distance:

Green LED should be OFF.

Yellow LED should be ON.

Red LED should be OFF.

The robot is getting close to the obstacle.

When the obstacle is at or below half of the warning distance:

Green LED should be OFF.

Yellow LED should be OFF.

Red LED should be ON.


The robot is dangerously close to the obstacle.

Display the following on the Serial Monitor:

Distance measured by the ultrasonic sensor.

Warning distance set by the potentiometer.

Current status of the robot.

Simulation : 

<img width="720" height="447" alt="Screenshot 2026-10-03 123443" src="https://github.com/user-attachments/assets/0fbdbd4a-8ff0-4c1f-829a-3e7a6364cb96" />
