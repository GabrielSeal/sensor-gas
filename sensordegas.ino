int sensorPin = A1;
int sensorValue = 0;
int sensorValuePorc;
void setup() {
 Serial.begin(9600);
 pinMode(sensorPin, INPUT);
}
void loop() {
 sensorValue = analogRead(sensorPin);
 sensorValuePorc = map(sensorValue,0,1023,0,100);
 Serial.print(sensorValuePorc);
 Serial.println(" %");
 
 
}

