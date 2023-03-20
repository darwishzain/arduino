/*
 * ARDUINO TRAINING 
 * CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR
 * TITLE: DO WHILE LOOP
 */

  int sum = 25;
  
void setup() {

   
  Serial.begin(9600);
  do {
    sum = sum + 5;
    Serial.print("sum = ");
    Serial.println(sum);
    delay(500);                // 500ms delay
  } while (sum <= 50);
}

void loop() {

 
  
}


/*
 * TEST STATUS : QUALIFIED
*/

