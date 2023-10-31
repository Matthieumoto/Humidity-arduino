# Projet Capteur DHT11 avec Écran LCD

Ce projet utilise un capteur DHT11 pour mesurer l'humidité de l'air et la température, et un écran LCD pour afficher ces données. De plus, il contrôle trois LEDs (verte, jaune et rouge) en fonction du niveau d'humidité mesuré.

## Matériel nécessaire

- Arduino (ou une carte compatible)
- Capteur DHT11
- Écran LCD 16x2
- Trois LEDs (verte, jaune, rouge)
- Résistances (pour les LEDs)
- Bouton poussoir (pour changer l'affichage)

## Bibliothèques

Ce projet utilise deux bibliothèques :

- [DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library) : Pour le capteur DHT11.
- [LiquidCrystal Library](https://www.arduino.cc/en/Reference/LiquidCrystal) : Pour l'écran LCD.

## Branchements

Assurez-vous de connecter les composants comme suit :

- Capteur DHT11 : Broche de données (pin 2) à D2 de l'Arduino.
- Écran LCD : Connectez-le conformément aux broches de l'Arduino (dans l'exemple, nous utilisons les broches 8, 9, 10, 11, 12, 13).
- LEDs : Connectez-les à des broches de sortie (7 pour la LED verte, 6 pour la LED jaune et 5 pour la LED rouge).
- Bouton poussoir : Connectez-le à une broche d'entrée (par exemple, 4).

## Comment ça marche

Le code lit les données du capteur DHT11 pour obtenir la valeur d'humidité. En fonction de cette valeur, il allume l'une des trois LEDs (verte, jaune ou rouge) et affiche le niveau d'humidité sur l'écran LCD. L'utilisateur peut appuyer sur un bouton pour basculer entre différents modes d'affichage.

## Photo 



## Exécution du code

1. Téléversez le code sur votre Arduino en utilisant l'IDE Arduino.
2. Assurez-vous que les composants sont correctement branchés.
3. Appuyez sur le bouton pour basculer entre les modes d'affichage.

## Personnalisation

Vous pouvez personnaliser ce code en ajoutant d'autres fonctionnalités, en modifiant les seuils d'humidité pour les LEDs, ou en affichant d'autres informations sur l'écran LCD en fonction de vos besoins.

## Auteurs

Ce projet a été réalisé par **Matthieu_moto**.

## Licence

Ce code est sous licence [Licence] et peut être utilisé conformément aux termes de cette licence.
