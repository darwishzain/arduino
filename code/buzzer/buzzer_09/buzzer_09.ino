void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(9,500);
  delay(500);
  tone(9,1000);
}
