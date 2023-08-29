# Modul s čidlem okolního světla BH1750

![TOP strana modulu s BH1750](https://github.com/LaskaKit/BH1750-Ambient-Light-Sensor/blob/main/img/1.JPG)

Levný ale přesný modul s čidlem okolního světla BH1750. BH1750 měří osvětlení a 16-bitový výsledek je možné vyčíst skrze I2C sběrnici. Ta je připojena na náš standardní I2C konektor, který jsme nazvali [uŠup (co je to?)](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%ce%bcsup/).</br>
Tyto konektory jsou tam dva pro jednoduché připojení dalších čidel. Jakých? Třeba čidlo [SCD41 pro měření CO2, teploty a vlhkosti vzduchu](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/), čidla SHT41 [teploty a vlhkosti vzduchu](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/) a [čidla tlaku, teploty a vlhkosti vzduchu BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [RTC Hodiny reálného času](https://www.laskakit.cz/laskakit-ds3231-orig--rtc-hodiny-realneho-casu/) s DS3231 nebo [OLED displej o velikosti 1.3" a rozlišení 128x64px](https://www.laskakit.cz/laskakit-oled-displej-128x64-1-3--i2c/?variantId=11903).

BH1750 má velmi široké pásmo měření s velkou přesností, měří od 1 - 65535 lx. Typické napájecí napětí modulu je od 2.4 V - 3.6 V se spotřebou maximální 1 uA ve vypnutém režimu. Typická spotřeba čidla se pak typicky pohybuje 120 uA pro změřené isvětlení 100 lx.

Připojit to můžeš nejen do našich vývojových kitů jako jsou univerzální [Meteo Mini s možností připojení solárního panelu](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), jednoduše programovatelný [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), velmi [úsporný a malý kit ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk s ESP32 a velkým 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) nebo [populárním kitem s ESP32 a 3.5" TFT displejem](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158). 

Nakonec, není nutné používat pouze naše desky - použít [můžeš téměř kterékoliv Arduino](https://www.laskakit.cz/arduino-2/), jednodeskový počítač [Rock Pi nebo Raspberry Pi](https://www.laskakit.cz/mini-pc/) či jiné vývojové kity s I2C sběrnicí.

Podporované knihovny v Arduino IDE jsou:</br>
https://github.com/claws/BH1750</br>
https://github.com/Starmbi/hp_BH1750</br>

## Modul je možné zakoupit na https://www.laskakit.cz/laskakit-bh1750-snimac-intenzity-osvetleni/
