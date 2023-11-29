void setup() {
  Serial.begin(115200);
  Serial.setTimeout(2000);
  while (!Serial) { }

  Serial.println("I'm awake, going to sleep for 30 seconds");
  delay(30000);  // 30 seconds delay
  Serial.println("Waking up now");
}

void loop() {
  // Empty loop
}
