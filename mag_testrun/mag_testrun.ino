/* Arduino Tutorial: How to use a magnetic contact switch 
   Dev: Michalis Vasilakis // www.ardumotive.com // Date: 4/8/2016 */

const int buzzer = 6; 
const int magSensor = 9;

int state; // 0 close - 1 open wwitch

void setup()
{
  pinMode(magSensor, INPUT_PULLUP);
}

void loop()
{
  state = digitalRead(magSensor);
  
  if (state == HIGH){
    tone(buzzer, 500);
  }
  else{
    noTone(buzzer);
  }
  delay(200);
}

