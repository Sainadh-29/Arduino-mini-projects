int lm35Pin = A1;
const int BUZ = 8;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temp = analogRead(lm35Pin) * 0.488;
  Serial.print("Temperature ");
  Serial.println(temp);

  if (temp >= 45.0) {
    digitalWrite(BUZ, HIGH);
  }
  else {
    digitalWrite(BUZ, LOW);
  }
  delay(1000);
}
