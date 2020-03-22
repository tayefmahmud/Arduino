#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,2,3,4,5); //LCD PINS (RS,E,D1,D2,D3,D4)
void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);  //DISPLAY CATEGORY 
  lcd.clear();  //CLEARING THE DISPLAY
}
void loop()
{
 lcd.setCursor(5,0);  //SETTING THE CURSOR 
 lcd.print("BANGLADESH");  //PRINT WHAT EVERY YOU WANT
 }
