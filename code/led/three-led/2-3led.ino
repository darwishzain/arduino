/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: 1 LED CONNECTION
*/

int pin1=13; 
int pin2=12;
int pin3=11;  
//all the pin attach on Arduino board must be declare


void setup() { 
  
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

Serial.begin(9600);
  //Serial.begin is to connect to serial monitor
}

void loop() {
  // function loop is for repeat the activity 

  //1st LED ONN
  digitalWrite(13,HIGH); //HIGH mean the allow the current
  digitalWrite(12,LOW); //HIGH mean the allow the current
  digitalWrite(11,LOW); //HIGH mean the allow the current
  delay(100);  //1000milisecond = 1 second
  
  //2nd LED ONN
  digitalWrite(13,LOW); //HIGH mean the allow the current
  digitalWrite(12,HIGH); //HIGH mean the allow the current
  digitalWrite(11,LOW); //HIGH mean the allow the current
  delay(100);  //1000milisecond = 1 second

   //1st LED ONN
  digitalWrite(13,LOW); //HIGH mean the allow the current
  digitalWrite(12,LOW); //HIGH mean the allow the current
  digitalWrite(11,HIGH); //HIGH mean the allow the current
  delay(100);  //1000milisecond = 1 second
}


/*
 *TEST STATUS : QUALIFIED
 */
