int incomingByte = 0;
int currentTime = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  incomingByte = Serial.read();
  currentTime = millis();

  Serial.println(incomingByte);
}
