const int lightPin = A6;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println("Light Intensity: " + String(analogRead(lightPin)));
  delay(1000);
}
