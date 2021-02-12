#define LED PC13

void setup() {
  Serial.begin();
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, !digitalRead(LED));
  Serial.println(digitalRead(LED));
  delay(300);
}
