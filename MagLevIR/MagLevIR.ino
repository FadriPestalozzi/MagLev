const int analogPin = A5; // Analog pin connected to the IR phototransistor
int sensorValue = 0; // Variable to store the sensor value

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  sensorValue = analogRead(analogPin); // Read the analog value from the phototransistor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue); // Print the sensor value to the serial monitor

  delay(1000); // Delay for 1 second before the next reading
}
