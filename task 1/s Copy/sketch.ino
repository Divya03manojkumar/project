#include <Servo.h>

Servo myServo;  // Create a servo object

void setup() {
  myServo.attach(9);  // Attach the servo on pin 9 to the servo object
}

void loop() {
  // Move the servo to 0 degrees
  myServo.write(0);
  delay(1000);  // Wait for 1 second

  // Move the servo to 90 degrees (middle position)
  myServo.write(90);
  delay(1000);  // Wait for 1 second

  // Move the servo to 180 degrees
  myServo.write(180);
  delay(1000);  // Wait for 1 second
}
