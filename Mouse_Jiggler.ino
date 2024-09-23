#include <Servo.h>

Servo myServo;  // Create a Servo object
int servoPin = 9;  // Define the pin the servo is connected to

void setup() {
  myServo.attach(servoPin);  // Attach the servo to the pin
  randomSeed(analogRead(0));  // Seed the random number generator
}

void loop() {
  int randomAngle = random(0, 181);  // Generate a random angle between 0 and 180
  myServo.write(randomAngle);  // Move the servo to the random angle
  delay(1000);  // Wait for 1 second
}
