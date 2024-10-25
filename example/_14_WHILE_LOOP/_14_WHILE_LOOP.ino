/*
 * ARDUINO TRAINING 
 * CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR
 * TITLE: WHILE LOOP
 */
 int sum = 0;

void setup() {
 
  Serial.begin(9600);
}

void loop() {

    // count up to 25 in 5s
   while (sum < 25) {
    sum = sum + 5;
    Serial.print("sum = ");
    Serial.println(sum);
    delay(500);                // 500ms delay
  }
}


/*
 * TEST STATUS : QUALIFIED
*/
 

