const int ledPin1 = 13; // red
const int ledPin2 = 12; // yellow
const int ledPin3 = 11; // green

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin1, HIGH);
  Serial.println("LED red ON");
  delay(500);
  digitalWrite(ledPin1, LOW);
  Serial.println("LED red OFF");
  delay(500);

  digitalWrite(ledPin2, HIGH);
  Serial.println("LED yellow ON");
  delay(500);
  digitalWrite(ledPin2, LOW);
  Serial.println("LED yellow OFF");
  delay(500);

  digitalWrite(ledPin3, HIGH);
  Serial.println("LED green ON");
  delay(500);
  digitalWrite(ledPin3, LOW);
  Serial.println("LED green OFF");
  delay(500);
}
