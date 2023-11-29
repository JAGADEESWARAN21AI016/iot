const int tempPin = 6;
void setup() {
  Serial.begin(9600);
}
void loop() {
  float cel = analogRead(tempPin) * 0.48828125;
  Serial.println("TEMPERATURE = " + String(cel) + "*C");
  
  delay(1000);
}
