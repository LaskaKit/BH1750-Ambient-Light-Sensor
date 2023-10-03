/*
* This example code for lux BH1750 module
* is used with ESP32 LPkit board.
* ESP32-LPkit reads Lux values from BH1750 sensor 
* and shows on serial monitor
*
* SDA - GPIO21
* SCL - GPIO22
*
* Made by (c) laskakit.cz 2023
*
* Libraries
* https://github.com/claws/BH1750 Example is used
*/

#include <BH1750.h>
#include <Wire.h>

BH1750 lightMeter;

void setup() {
  Serial.begin(115200);

  Wire.begin(22,21);
  
  lightMeter.begin();

  Serial.println(F("BH1750 Test begin"));
}

void loop() {
  float lux = lightMeter.readLightLevel();
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(1000);
}
