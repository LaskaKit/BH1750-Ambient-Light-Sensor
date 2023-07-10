/*
* This example code for lux BH1750 module
* is used with ESP32 LPkit board.
* ESP32-LPkit reads Lux values from BH1750 sensor 
* and shows on OLED display
*
* SDA - GPIO21
* SCL - GPIO22
*
* Made by (c) laskakit.cz 2023
*
* Libraries
* https://github.com/claws/BH1750 Example is used
* https://github.com/adafruit/Adafruit-GFX-Library
* https://github.com/adafruit/Adafruit_SH110X
*/

#include <BH1750.h>
#include <Wire.h>
#include <Adafruit_GFX.h>     // https://github.com/adafruit/Adafruit-GFX-Library
#include <Adafruit_SH110X.h>  // https://github.com/adafruit/Adafruit_SH110X

#define i2c_Address 0x3c


BH1750 lightMeter;
Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1); //Nastavý display

void setup() {
  Serial.begin(115200);

  Wire.begin(21,22);
  
  lightMeter.begin();

  Serial.println(F("BH1750 Test begin"));

  delay(250);
  
  display.begin(i2c_Address, true); 
  display.clearDisplay(); 
  display.setTextColor(SH110X_WHITE); 
  display.setTextSize(1); 
}

void loop() {
  float lux = lightMeter.readLightLevel();
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" lx");

  display.setCursor(0,0);
  display.println((String)"Light: "+lux);       //Zobrazí na displeji Lux data
  display.display(); 
  delay(1000);
  display.clearDisplay();
}
