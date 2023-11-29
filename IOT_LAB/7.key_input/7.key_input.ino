void setup() {
  for (int i = 2; i <= 7; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  pinMode(9, INPUT_PULLUP);
}

void loop() {
  if (!digitalRead(9)) {
    for (int i = 2; i <= 7; i++) {
      digitalWrite(i, LOW);
      delay(2000);
      digitalWrite(i, HIGH);
    }
  }
}
