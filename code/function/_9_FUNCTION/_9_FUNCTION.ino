/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: FUNCTION
*/


void setup() {
  Serial.begin(9600);
}

void loop() {
int i=5;
  int j=2;
  int k;

  k= tambah(i,j);
  Serial.printLN(k);
  delay(2000);
   
}

int tambah(int i,int j){
int result;

result=i+j;
  
  return result;
}

/*
 *TEST STATUS : QUALIFIED
 */
