

 const int potPin = A0; //pin A0 to read analog input
 const int ldrPin = A1;


void setup()

{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(Buzzer,OUTPUT);
  pinMode(LED_1,OUTPUT);
 
  pinMode(potPin, INPUT); //Optional
  pinMode(ldrPin, INPUT);
Serial.begin(9600);

}

void loop()

{
 float value1 = analogRead(potPin);          //Read and hold analog value from potentiometer
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;

  int ldrStatus = analogRead(ldrPin);
 

//print
Serial.print(distance);
Serial.print("|");
Serial.print(value1);
Serial.print("|");
Serial.println(ldrStatus);
//Serial.print("|");
//Serial.print(dust);
//Serial.println();


delay(1000);

}
