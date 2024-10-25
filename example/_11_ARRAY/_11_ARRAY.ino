/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: ARRAY
*/
 
 
 int array[3]={4,6,7};


void setup() {

  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
 for (int i=0; i<3; i++){
  Serial.print(array[i]);
  delay(3000);
 }
}


/*
 *TEST STATUS : QUALIFIED
 */
