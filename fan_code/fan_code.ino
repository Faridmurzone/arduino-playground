#include <LiquidCrystal.h>

int fanC;
const int fanSensor = A0;

LiquidCrystal lcd(11, 10, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
}


void loop() {
  fanC = analogRead(fanSensor);
  fanC = fanC*0.48828125;
  Serial.println(fanC);
  lcd.setCursor(0,0);
  lcd.print("Temperatura: ");
  lcd.setCursor(0,1);
  lcd.print(fanC);
  delay(500);
}
