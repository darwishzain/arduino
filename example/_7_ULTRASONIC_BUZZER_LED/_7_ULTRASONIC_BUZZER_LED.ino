/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: ULTRASONIC SENSOR AND LED AND BUZZER
*/


const int trigPin=9;
const int echoPin= 10;
long duration;
int distance;
int Buzzer= 6;
int LED_1=13;





void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(Buzzer,OUTPUT);
  pinMode(LED_1,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance :");
  Serial.println(distance);
    Serial.println("cm");

  if (distance < 10){
   digitalWrite(Buzzer,300);
   digitalWrite(LED_1,HIGH);
   //delay(500);
   //digitalWrite(Buzzer,LOW);
   //digitalWrite(LED_1,LOW);
   //delay(500);
   //digitalWrite(Buzzer,HIGH);
   //digitalWrite(LED_1,HIGH);
   //delay(500);
  }
  else{
    digitalWrite(Buzzer,LOW);
    digitalWrite(LED_1,LOW);
    }
  
  delay(1000);
  
}


/*
 *TEST STATUS : QUALIFIED
 */
