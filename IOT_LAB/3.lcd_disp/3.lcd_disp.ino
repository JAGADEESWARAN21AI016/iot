#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello World");
}
void loop() {
  for (int i = 0; i < 10; ++i) {
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }
}
