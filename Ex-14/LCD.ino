#include <LiquidCrystal.h>

int Contrast = 75;
int RS = 12, E = 11, D4 = 5, D5 = 4, D6 = 3, D7 = 2;
LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {
    analogWrite(6, Contrast);
    lcd.begin(16, 2);
}

void loop() {
    lcd.setCursor(0, 0);
    lcd.print("Sanjay");

    lcd.setCursor(0, 1);
    lcd.print("Shriram");
    delay(2000);
}
