const int potPin = A0;     // Pin connected to the potentiometer
const int magnetPin = 9;  // Pin connected to the base of the transistor

void setup() {
  Serial.begin(9600); 
  pinMode(potPin, INPUT);
  pinMode(magnetPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin); // Read potentiometer value
  int magnetValue = map(potValue, 0, 1023, 0, 255); // Map the potentiometer value to a range suitable for PWM (0-255)
  
  analogWrite(magnetPin, magnetValue); // Control the electromagnet with PWM

  Serial.print("potValue: ");
  Serial.println(potValue);
  
  Serial.print("magnetValue: ");
  Serial.println(magnetValue);
  
  
  delay(500);
}
