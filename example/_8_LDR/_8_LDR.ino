/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: LDR SENSOR
*/


 int ledPin = 13;
 int ledY = 12;
 int ldrPin = A0;

void setup() {

pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
pinMode(ledY,OUTPUT);
Serial.begin(9600);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
Serial.println(ldrStatus);

if (ldrStatus <=100) {

digitalWrite(ledPin, HIGH);
digitalWrite(ledY, LOW);
Serial.println("LDR is HIGH, LED is ON");

}
else if (ldrStatus <=150) {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledY, HIGH);
  }
else {

digitalWrite(ledPin, LOW);

Serial.println("LDR is LOW,LED is OFF");

}

}

/*
 *TEST STATUS : 
 */
