# Projet Capteur DHT11 avec Écran LCD

Ce projet utilise un capteur DHT11 pour mesurer l'humidité de l'air et la température, et un écran LCD pour afficher ces données. De plus, il contrôle trois LEDs (verte, jaune et rouge) en fonction du niveau d'humidité mesuré.

## Matériel nécessaire

- Arduino (ou une carte compatible)
- Capteur DHT11
- Écran LCD 16x2
- Trois LEDs (verte, jaune, rouge)
- Résistances (pour les LEDs)

## Bibliothèques

Ce projet utilise deux bibliothèques :

- [DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library) : Pour le capteur DHT11.
- [LiquidCrystal Library](https://www.arduino.cc/en/Reference/LiquidCrystal) : Pour l'écran LCD.

## Branchements

Assurez-vous de connecter les composants comme suit :

- Capteur DHT11 : Broche de données (pin 2) à D2 de l'Arduino.
- Écran LCD : Connectez-le conformément aux broches de l'Arduino (dans l'exemple, nous utilisons les broches 8, 9, 10, 11, 12, 13).
- LEDs : Connectez-les à des broches de sortie (7 pour la LED verte, 6 pour la LED jaune et 5 pour la LED 

## Comment ça marche

Le code lit les données du capteur DHT11 pour obtenir la valeur d'humidité. En fonction de cette valeur, il allume l'une des trois LEDs (verte, jaune ou rouge) et affiche le niveau d'humidité sur l'écran LCD.

## Photo 

![IMG_6278](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/6eaaa6b3-8feb-4ae2-8626-b6a98b6fb59e)

![IMG_6280](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/eaeaad10-554a-4208-9251-6db161b405d6)

![IMG_6282](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/ccb0282a-dec7-4ed8-bfad-6b29e3669e36)

![IMG_6285](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/06c205f7-3c40-4911-a0f4-274b570f78fb)

![IMG_6287](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/22c3aa7e-42b5-42a0-9d0d-b5d0f8264790)

![IMG_6283](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/54110ecf-d1e7-4ce8-a746-4dfc3a60be2c)

![IMG_6288](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/0c77364e-fc9e-4768-b35f-6b222f4b315e)

![image](https://github.com/Matthieumoto/Humidity-arduino/assets/136125610/9b759bdd-4301-4eff-8f7e-1e8885888caa)

## Exécution du code

1. Téléversez le code sur votre Arduino en utilisant l'IDE Arduino.
2. Assurez-vous que les composants sont correctement branchés.

## Personnalisation

Vous pouvez personnaliser ce code en ajoutant d'autres fonctionnalités, en modifiant les seuils d'humidité pour les LEDs, ou en affichant d'autres informations sur l'écran LCD en fonction de vos besoins.

## Auteurs

Ce projet a été réalisé par **Matthieu_moto**.

## Licence

Ce code est sous licence [Licence] et peut être utilisé conformément aux termes de cette licence.
