#include  <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);

int backLight = 13;             // pin 13 will control the backlight
int buzzerPin = 6;              //pin for the buzzer
int ledPin = 8;                 // pin for the LED

int pirPin = 7;                 // input pin for PIR sensor
int pirState = LOW;             // assuming no motion detected

int magPin = 9;                 //input pin for magnetic door sensor
int magState = LOW;             //assuming the door is closed


void setup() {
  pinMode(ledPin, OUTPUT);      // declaring LED as output
  pinMode(pirPin, INPUT);       // declaring PIR as input
  pinMode(backLight, OUTPUT);   // declaring LCD as output
  pinMode(magPin, INPUT);       // declaring magnetic sensor as input
  
  analogWrite(backLight, 150);

  lcd.begin(16,2);              // columns, rows. size of display
  lcd.clear();                  // clear the screen
  lcd.setCursor(0,0);           // set cursor to column 0, row 0 (first row)
  lcd.print("");                // print empty string
  lcd.setCursor(0,1);           // move cursor down one
  lcd.print("");                // print empty string
  
  Serial.begin(9600);
  
}
 
void loop(){
  
  pirState = digitalRead(pirPin);  
  magState = digitalRead(magPin);

  

}
//  if (valM == HIGH) {
//    digitalWrite(ledPin, HIGH);  // turn LED ON
//    
//    if (pirState == LOW) {
//      lcd.clear();                        // clear the screen
//      lcd.setCursor(0,0);                 // set cursor to column 0, row 0 (first row)
//      lcd.print("Motion detected!");       // input your text here
//      lcd.setCursor(0,1);                 // move cursor down one
//      lcd.print(" Do not enter!");      //input your text here
//      lcd.setCursor(16,3); // set the cursor outside the display count
//
//      tone(buzzer, 500);
//      delay(300); 
//      pirState = HIGH;
//    }
//    
//    if (valP == HIGH){
//        //camera and email
//      }
//  
//  }else{
//    
//    digitalWrite(ledPin, LOW); // turn LED OFF
//    if (pirState == HIGH){
//      // we have just turned of
//      lcd.clear();                        // clear the screen
//      lcd.setCursor(0,0);                 // set cursor to column 0, row 0 (first row)
//      lcd.print("Do not enter!");       // input your text here
//      lcd.setCursor(0,1);                 // move cursor down one
//      lcd.print("In meeting.");      //input your text here
//      lcd.setCursor(16,3); // set the cursor outside the display count
//
//      noTone(buzzer);
//      delay(300); 
//      pirState = LOW;
//    }
//
//    if (valP == HIGH){
//        //camera and email
//      }
//    }
}




    
    
