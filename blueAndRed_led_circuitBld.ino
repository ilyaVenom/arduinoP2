int redLED = 9;
int blueLED = 8;
int onTime = 1000;
int offTime = 500; // plus name vars something useful
void setup() { 
  // this is setting the pin Moodes
  pinMode ( redLED,OUTPUT);
}
void loop() {
  digitalWrite(redLED,HIGH);
  delay(onTime);
  digitalWrite(redLED,LOW);
  delay(offTime);
  digitalWrite(blueLED, HIGH);
  delay(onTime);
  digitalWrite(blueLED, LOW);
  delay(offTime);
}
