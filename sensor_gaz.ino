int sensor = 6;
void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensor) == HIGH) {
    Serial.println("etat haut");
    delay(100);
  }
  if (digitalRead(sensor) == LOW) {
    Serial.println("etat bas");
    delay(100);
  }
}
