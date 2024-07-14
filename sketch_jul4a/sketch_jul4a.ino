#include <LiquidCrystal.h>
#include <dht.h>
int Contrast = 75;
dht DHT;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHT_PIN 7

void setup() {
  analogWrite(6, Contrast);
  lcd.begin(16, 2);


}
void loop() {
  int chk= DHT.read11(DHT_PIN);
  lcd.setCursor(0, 0);
  lcd.print(DHT.temperature);
  lcd.setCursor(0, 1);
  lcd.print(DHT.humidity);
  delay(2000);
}
