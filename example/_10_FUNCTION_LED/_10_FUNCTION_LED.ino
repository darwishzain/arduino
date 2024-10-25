/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: FUNCTION
*/
int LED1=13;  
//all the pin attach on Arduino board must be declare

void setup() {

  Serial.begin(9600); 
 
}

void loop() {
on();
off();
}

void on(){
  digitalWrite(LED1,HIGH); //HIGH mean the allow the current
  delay(3000);  //1000milisecond = 1 second
}


void off(){
  digitalWrite(13,LOW); //LOW means stop the current flow
  delay(3000);
}
/*
 *TEST STATUS : QUALIFIED
 */
