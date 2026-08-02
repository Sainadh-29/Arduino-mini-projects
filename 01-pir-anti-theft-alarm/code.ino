const int PIR = 13;
const int ALARM = 8;

void setup() {
  pinMode(PIR, INPUT);
  pinMode(ALARM, OUTPUT);
}

void loop() {
  pinMode(PIR, INPUT);
  if (digitalRead(PIR) == HIGH) {
    digitalWrite(ALARM, HIGH);
  }
  else {
    digitalWrite(ALARM, LOW);
  }
}
