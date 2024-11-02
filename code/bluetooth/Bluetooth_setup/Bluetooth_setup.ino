#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(10,11);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  Serial.println("HC-05");

  bluetoothSerial.begin(38400);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(bluetoothSerial.available())
    {
     Serial.write(bluetoothSerial.read());
    }
    if(Serial.available())
    {
      bluetoothSerial.write(Serial.read());
    }
    }
