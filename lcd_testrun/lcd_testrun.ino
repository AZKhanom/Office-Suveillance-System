#include  <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
int backLight = 13;    // pin 13 will control the backlight

void setup()
{
  pinMode(backLight, OUTPUT);          //set pin 13 as output
  analogWrite(backLight, 150);        //controls the backlight intensity 0-254
  
  
  lcd.begin(16,2);                    // columns, rows. size of display
  lcd.clear();                        // clear the screen
  lcd.setCursor(0,0);                 // set cursor to column 0, row 0 (first row)
  lcd.print("Please do not enter");       // input your text here
  lcd.setCursor(0,1);                 // move cursor down one
  lcd.print("In meeting");      //input your text here
}

void loop()
{
  lcd.setCursor(16,3); // set the cursor outside the display count
  lcd.autoscroll();    // set the display to automatically scroll:
  lcd.print(" ");      // print empty character
  delay(300);          
} 
