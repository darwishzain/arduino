/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: LDR SENSOR
*/


 int ledPin = 13;
 int ldrPin = A0;

void setup() {

pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);

Serial.begin(9600);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
Serial.println(ldrStatus);

if (ldrStatus >=300) {

digitalWrite(ledPin, HIGH);

Serial.println("LDR is HIGH, LED is ON");

}

else {

digitalWrite(ledPin, LOW);

Serial.println("LDR is LOW,LED is OFF");

}

}

/*
 *TEST STATUS : 
 */
