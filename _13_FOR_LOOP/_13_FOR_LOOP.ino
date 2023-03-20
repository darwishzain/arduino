/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: FOR LOOPING
*/

void setup() {
Serial.begin(9600);
}

void loop() {
  for(int x =0; x<5; x++)
{
Serial.println(x);
delay(1000);
}
}


/*
 *TEST STATUS : QUALIFIED
 */
