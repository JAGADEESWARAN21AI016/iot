void setup() { pinMode(5, OUTPUT); }
void loop() {
  fadeLED(0, 255, 5);
  fadeLED(255, 0, -5);
}
void fadeLED(int start, int end, int step) {
  for (int i = start; i <= end && i >= 0; i += step) {
    analogWrite(5, i);
    delay(50);
  }
}
