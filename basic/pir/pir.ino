const int pirPin = 2;       // The pin where PIR OUT is connected
int motionState = LOW;      // Current state of motion
int lastState = LOW;        // To track state changes

void setup() {
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
  Serial.println("PIR Sensor Reading Initialized...");
}

void loop() {
  motionState = digitalRead(pirPin);

  if (motionState == HIGH && lastState == LOW) {
    Serial.println("Motion Detected!");
    lastState = HIGH;
  } else if (motionState == LOW && lastState == HIGH) {
    Serial.println("Motion Stopped.");
    lastState = LOW;
  }

  delay(100); // small debounce delay
}
