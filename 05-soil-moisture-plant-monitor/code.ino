const int soilPin = A0;
const int ledPin = 7;
const int buzzerPin = 8;
const int threshold = 500; // adjust based on dry/wet calibration

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(soilPin);
  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  if (moistureValue < threshold) {
    // Soil is dry - alert to water the plant
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Soil is moist - no alert needed
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000);
}
