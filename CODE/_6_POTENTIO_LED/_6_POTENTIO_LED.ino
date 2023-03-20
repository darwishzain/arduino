/*
  ARDUINO TRAINING
  CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

  TITLE: POTENTIOMETER LED
*/



//Constants:
const int ledPin = 9;  //pin 9 has PWM funtion
const int potPin = A0; //pin A0 to read analog input

//Variables:
int value; //save analog value


void setup() {
  //input or output declaration
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT); //Optional

  Serial.begin(9600);

}

void loop() {

  value = analogRead(A0);          //Read and hold analog value from potentiometer
  Serial.println(value);
  value = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  //Serial.println(value);
  analogWrite(ledPin, value);          //Send PWM value to led
  delay(100);                          //Small delay

}


//
//
//// the setup routine runs once when you press reset:
////void setup() {
//  // initialize serial communication at 9600 bits per second:
//  Serial.begin(9600);
//}
//
//// the loop routine runs over and over again forever:
//void loop() {
//  // read the input on analog pin 0:
//  int sensorValue = analogRead(A0);
//  // print out the value you read:
//  Serial.println(sensorValue);
//  delay(1);        // delay in between reads for stability
//}



/*
  TEST STATUS : QUALIFIED
*/
