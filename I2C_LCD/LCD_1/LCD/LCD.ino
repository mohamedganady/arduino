#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup()
{
	lcd.init();
	lcd.backlight();

}

void loop()
{

  // Set cursor (Column, Row)
	lcd.setCursor(0, 0);
	// print "Hello" at (0, 0)	 
	lcd.print("Hello"); 
	// Set cursor (Column, Row)
	lcd.setCursor(7,0);
	lcd.print("GANADY");

	delay(100);
}
