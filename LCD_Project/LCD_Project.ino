#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(3, 4, 5, 6, 7, 8, 9 ,10 ,11, 12, 13);
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
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  lcd.createChar(0, heart);
}

void loop() {
  // Set the cursor to column 0, line 1
  String s = "Niggas Kissing";
  lcd.setCursor(0, 0);
  lcd.autoscroll();
  for (int i = 0; i < s.length(); i++)
  {
    lcd.print(s[i]);
    delay(500);
  }
  lcd.write(byte(0));
  // Print a message to the LCD
}
