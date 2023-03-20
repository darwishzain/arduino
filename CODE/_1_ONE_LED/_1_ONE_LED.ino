la5v 4[]qw2 m/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: 1 LED CONNECTION
*/

int LED1=13;  
//all the pin attach on Arduino board must be declare


void setup() { 
  //function setup to declare the component is INPUT or OUTPUT
  pinMode(13,OUTPUT);

Serial.begin(9600);
  //Serial.begin is to connect to serial monitor
}

void loop() {
  // function loop is for repeat the activity 
  
  digitalWrite(LED1,HIGH); //HIGH mean the allow the current
  delay(3000);  //1000milisecond = 1 second
    digitalWrite(13,LOW); //LOW means stop the current flow
  delay(3000);
}


/*
 *TEST STATUS : QUALIFIED
 */
