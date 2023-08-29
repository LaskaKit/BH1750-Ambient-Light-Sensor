# BH1750 Ambient Light Sensor module

![TOP strana modulu s BH1750](https://github.com/LaskaKit/BH1750-Ambient-Light-Sensor/blob/main/img/1.JPG)

Inexpensive but accurate module with BH1750 ambient light sensor. The BH1750 measures the illumination and the 16-bit result can be read out via the I2C bus. This is connected to our standard I2C connector, which we have called [uSup (what is it?)](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%ce%bcsup/).</br>

And the module includes two uSup connector where you can connect another modules. And what another modules you can use? For example the sensor [SCD41 for measurement of CO2, temperature and humidity](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/), sensor SHT41 [temperature nad humidity](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/) and [sensor of pressure, temperature, humidity BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [RTC - Real Time Clock](https://www.laskakit.cz/laskakit-ds3231-orig--rtc-hodiny-realneho-casu/) with DS3231 or [OLED display with 1.3" dimension and 128x64px resolution](https://www.laskakit.cz/laskakit-oled-displej-128x64-1-3--i2c/?variantId=11903).

You can connect all these modules also to our evaluation boards such as [Meteo Mini with solar panel input](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), easily programmed [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), super [low power and small ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk with ESP32 and huge 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) or [popular eval board with ESP32 and 3.5" TFT display](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158). 

Finally, it is not necessary to use only our eval boards, you can use [common Arduino boards](https://www.laskakit.cz/arduino-2/), single-board computers as [Rock Pi or Raspberry Pi](https://www.laskakit.cz/mini-pc/) or another popular evaluation boards.

The BH1750 has a very wide measuring range with high accuracy, measuring from 1 - 65535 lx. Typical module supply voltage is from 2.4 V - 3.6 V with a maximum power consumption of 1 uA in off mode. Typical sensor consumption is then typically 120 uA for a measured illuminance of 100 lx.

Arduino IDE libraries what are supported this sensor are:
https://github.com/claws/BH1750
https://github.com/Starmbi/hp_BH1750

## You can buy this module on https://www.laskakit.cz/laskakit-bh1750-snimac-intenzity-osvetleni/
