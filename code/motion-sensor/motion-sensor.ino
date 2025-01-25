const int trigPin=9;
const int echoPin=10;
int buzzer=3;
int sound=0;
//wanna make the buzzer sounds based on distance


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //sound=analogRead(echoPin);
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  sound= pulseIn(echoPin,HIGH);

  
  // put your main code here, to run repeatedly:
  tone(3,sound);
  Serial.print(sound);
  delay(1000);
}
