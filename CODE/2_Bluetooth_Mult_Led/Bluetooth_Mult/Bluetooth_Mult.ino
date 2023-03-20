/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: 1 MULTIPLE LED BLUETOOTH
*/

char incomingByte; 
int LED1 = 13; 
int LED2 = 12;
//int LED3 = 3;
//int LED4 = 4;

void setup() {
Serial.begin(9600); 
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
//pinMode(LED3, OUTPUT);
//pinMode(LED4, OUTPUT);
}

void loop() {
if (Serial.available() > 0) { 
incomingByte = Serial.read(); 

if(incomingByte == '1') {digitalWrite(LED1, HIGH); }
if(incomingByte == '2') {digitalWrite(LED1, LOW); }

if(incomingByte == '3') {digitalWrite(LED2, HIGH); }
if(incomingByte == '4') {digitalWrite(LED2, LOW); }

//if(incomingByte == '3') {digitalWrite(LED3, HIGH); }
//if(incomingByte == '7') {digitalWrite(LED3, LOW); }
//
//if(incomingByte == '4') {digitalWrite(LED4, HIGH); }
//if(incomingByte == '8') {digitalWrite(LED4, LOW); }

}
}


/*
 *TEST STATUS : QUALIFIED
 */
