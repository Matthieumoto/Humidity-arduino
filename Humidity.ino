#include "DHT.h"
#include "LiquidCrystal.h"

DHT dht(2, DHT11);
LiquidCrystal lcd = LiquidCrystal(8, 9, 10, 11, 12, 13);

void setup() {  
  // Initialise la capteur DHT11
  dht.begin();
  lcd.begin(16, 2);

  pinMode(7, OUTPUT); // VERT
  pinMode(6, OUTPUT); // JAUNE
  pinMode(5, OUTPUT); // ROUGE
}

void loop() {
  if (dht.readHumidity() > 40 && dht.readHumidity() < 60) {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    lcd.clear();
    lcd.setCursor(9, 1);
    lcd.print("Normal");
  } 

  if (dht.readHumidity() < 40 && dht.readHumidity() > 30) {
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
    lcd.clear();
    lcd.setCursor(9, 1);
    lcd.print("Moyen");
  }

  if (dht.readHumidity() > 60 && dht.readHumidity() < 70) {
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
    lcd.clear();
    lcd.setCursor(9, 1);
    lcd.print("Moyen");
  }

  if (dht.readHumidity() > 70 || dht.readHumidity() < 30) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    lcd.clear();
    lcd.setCursor(9, 1);
    lcd.print("Eleve");
  }

  float humidity = dht.readHumidity();

  lcd.setCursor(0, 0);
  lcd.print("Humidite =");

  lcd.setCursor(11, 0);  
  lcd.print(humidity, 0);

  lcd.setCursor(14, 0);  
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Niveau :");
}
