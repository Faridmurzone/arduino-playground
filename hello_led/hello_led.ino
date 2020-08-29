int ledRojo = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRojo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledRojo, HIGH);
  delay(1000);
  digitalWrite(ledRojo, LOW);
  delay(10000);
}
