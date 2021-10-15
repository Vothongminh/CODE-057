//VTM https://www.youtube.com/c/VTMVlogVoThongMinh
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  Serial.println(digitalRead(3));
  if (digitalRead(3) == 0) {
    lcd.setCursor(0, 1);
    lcd.print("Phat hien vat can");
  }
  else
  {
    lcd.clear();
  }
}
