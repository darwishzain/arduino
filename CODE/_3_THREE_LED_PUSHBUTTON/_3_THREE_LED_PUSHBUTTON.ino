/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: PUSH BUTTON WITH 3 LED
*/


int LED_1=13;
int LED_2=12;
int LED_3=11;
//declaration for LED

int BUTTON_1=4;
int BUTTON_2=5;
int BUTTON_3=6;
//all the pin attach on Arduino board must be declare

void setup() {
   //function setup to declare the component is INPUT or OUTPUT
   //LED 
pinMode(LED_1,OUTPUT);
pinMode(LED_2,OUTPUT);
pinMode(LED_3,OUTPUT);

    //pushbutton
pinMode(BUTTON_1,INPUT);
pinMode(BUTTON_2,INPUT);
pinMode(BUTTON_3,INPUT);

Serial.begin(9600);
  //Serial.begin is to connect to serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(BUTTON_1)== HIGH)
{
  digitalWrite(LED_1,HIGH);
  
  }
else
{
 digitalWrite(LED_1,LOW);
  }
  
//second Button

if(digitalRead(BUTTON_2)== HIGH)
{
  digitalWrite(LED_2,HIGH);
  
  }
else
{
 digitalWrite(LED_2,LOW);
  }

//third button
  if(digitalRead(BUTTON_3)== HIGH)
{
  digitalWrite(LED_3,HIGH);
  
  }
else
{
 digitalWrite(LED_3,LOW);
  }



  
}


/*
 *TEST STATUS : QUALIFIED
 */
