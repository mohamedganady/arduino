
//Receiver Side:
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <SoftwareSerial.h>
#include <Keypad.h>
void setup()
{
  pinMode(8, INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  //lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("   WELCOME     ");
  lcd.setCursor(1, 1);
  lcd.print(" GANADY   ");
  delay(2000);
  lcd.clear();
}
void loop()
{
  unsigned long duration = pulseIn(8, HIGH);
  Serial.println(duration);
  if (duration > 10000 && duration < 17000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 1          ");
  }
  else if (duration > 20000 && duration < 27000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 2          ");
  }
  else if (duration > 30000 && duration < 37000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 3          ");
  }
  else if (duration > 40000 && duration < 47000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 4          ");
  }
  else if (duration > 50000 && duration < 57000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 5          ");
  }
  else if (duration > 60000 && duration < 67000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 6          ");
  }
  else if (duration > 70000 && duration < 77000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 7          ");
  }
  else if (duration > 80000 && duration < 87000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 8          ");
  }
  else if (duration > 90000 && duration < 97000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 9          ");
  }
  else if (duration > 100000 && duration < 107000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: *          ");
  }
  else if (duration > 110000 && duration < 117000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: 0          ");
  }
  else if (duration > 120000 && duration < 127000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: #          ");
  }
  else if (duration > 130000 && duration < 137000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: A          ");
  }
  else if (duration > 140000 && duration < 147000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: B          ");
  }
  else if (duration > 150000 && duration < 157000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: C          ");
  }
  else if (duration > 160000 && duration < 167000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received: D          ");
  }
}
