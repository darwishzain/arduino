/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: BUZZER
*/

int buzzer=8;

void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
}

void loop() {
 
    tone(buzzer,900);
    delay(1000);
    tone(buzzer,500);
    delay(1000);
    tone(buzzer,10);
    delay(1000);
  }
 
  
/*
 *TEST STATUS : 
 */
