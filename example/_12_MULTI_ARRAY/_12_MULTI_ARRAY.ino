/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: 2 DIMENTIONAL ARRAY
*/
 
 
 int array[3][3]={
  {4,6,7},
  {6,7,8},
  {9,1,2}
 };


void setup() {

  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
 for (int i=0; i<3; i++){
   for (int j=0; j<3; j++){
     Serial.print(array[i][j]);
      delay(3000);
   }
  Serial.println();
  delay(3000);
 }
}

/*
 *TEST STATUS : QUALIFIED
 */
