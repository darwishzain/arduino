/*
ARDUINO TRAINING 
CREATE BY : MUHAMMAD SHAHKHIR BIN MOZAMIR

 TITLE: ARDUINO SPEAK
*/

String voice;
#define led 13
 
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  
}
 
void loop() {                    // put your main code here, to run repeatedly:
  while (Serial.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable
  char c = Serial.read(); //Conduct a serial read
  if (c == '#') {break;} //Exit the loop when the # is detected after the word
  voice += c; //Shorthand for voice = voice + c
  }
  if (voice.length() > 0) {
    Serial.println(voice);
//-----------------------------------------------------------------------//  
  //----------Control Multiple Pins/ LEDs----------//
 if(voice == "good morning") 
{
digitalWrite(led,HIGH);
}  

else if(voice == "good night")
{
digitalWrite(led,LOW);
}
 
voice=""; //Reset the variable after initiating
}
}

/*
 *TEST STATUS : QUALIFIED
 */
