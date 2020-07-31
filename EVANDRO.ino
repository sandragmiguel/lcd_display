//instagram e linkedin sgmtec1

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, heart);
}

void loop() {
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.write(byte(0));
  lcd.print(" EVANDRO ");
  lcd.write(byte(0));
  lcd.setCursor(2,1);
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.print("NANI");
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.write(byte(0));
  delay(2000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("SO ENQUANTO");
  lcd.setCursor(2,1);
  lcd.print("EU RESPIRAR");
  delay(4000);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("VOU ME LEMBRAR");
  lcd.setCursor(4,1);
  lcd.print("DE VOCE");
  delay(2000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("SO ENQUANTO");
  lcd.setCursor(2,1);
  lcd.print("EU RESPIRAR");
  delay(4000);
  lcd.clear();
  lcd.setCursor(0,2);
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.print(" SANDRA ");
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.write(byte(0));
  delay(2000);
}
