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
 
    tone(buzzer,300);
    delay(1000);
    tone(buzzer,600);
    delay(1000);
    tone(buzzer,900);
    delay(1000);
    tone(buzzer,100);
    delay(1000);
    tone(buzzer,300);
    delay(1000);
    tone(buzzer,600);
    delay(1000);
    tone(buzzer,900);
    delay(1000);
  }
 
  
/*
 *TEST STATUS : 
 */
