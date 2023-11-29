#include <Servo.h>
Servo myservo;
void setup() {
  myservo.attach(10);
}
void loop() {
  for (int pos = 0; pos <= 180; pos += 10) {
    myservo.write(pos);
    delay(500);  // Reduced delay
  }
  for (int pos = 180; pos >= 0; pos -= 10) {
    myservo.write(pos);
    delay(500);  // Reduced delay
  }
}
