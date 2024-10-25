/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: BUZZER AND PUSH BUTTON
*/

int buzzer=8;
int BUTTON_1=4;

void setup() {
 // put your setup code here, to run once:
 // Buzzer
pinMode(8,OUTPUT);
//pushbutton
pinMode(BUTTON_1,INPUT);
}

void loop() {

if(digitalRead(BUTTON_1)== HIGH)
{
    tone(buzzer,1000);
   // delay(1000);
    
    
  }
else
{
  noTone(buzzer);
  //tone(buzzer,1000);
 }


 
  
   
  }
 
  
/*
 *TEST STATUS : 
 */
