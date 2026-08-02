// Multi-Zone Home Security System
// 4 PIR sensors, each triggering its own buzzer (independent zones)

const int PIR1 = 2;
const int PIR2 = 3;
const int PIR3 = 4;
const int PIR4 = 5;

const int BUZZER1 = 8;
const int BUZZER2 = 9;
const int BUZZER3 = 10;
const int BUZZER4 = 11;

void setup() {
  pinMode(PIR1, INPUT);
  pinMode(PIR2, INPUT);
  pinMode(PIR3, INPUT);
  pinMode(PIR4, INPUT);

  pinMode(BUZZER1, OUTPUT);
  pinMode(BUZZER2, OUTPUT);
  pinMode(BUZZER3, OUTPUT);
  pinMode(BUZZER4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Zone 1
  if (digitalRead(PIR1) == HIGH) {
    digitalWrite(BUZZER1, HIGH);
    Serial.println("Zone 1: Motion detected!");
  } else {
    digitalWrite(BUZZER1, LOW);
  }

  // Zone 2
  if (digitalRead(PIR2) == HIGH) {
    digitalWrite(BUZZER2, HIGH);
    Serial.println("Zone 2: Motion detected!");
  } else {
    digitalWrite(BUZZER2, LOW);
  }

  // Zone 3
  if (digitalRead(PIR3) == HIGH) {
    digitalWrite(BUZZER3, HIGH);
    Serial.println("Zone 3: Motion detected!");
  } else {
    digitalWrite(BUZZER3, LOW);
  }

  // Zone 4
  if (digitalRead(PIR4) == HIGH) {
    digitalWrite(BUZZER4, HIGH);
    Serial.println("Zone 4: Motion detected!");
  } else {
    digitalWrite(BUZZER4, LOW);
  }
}
