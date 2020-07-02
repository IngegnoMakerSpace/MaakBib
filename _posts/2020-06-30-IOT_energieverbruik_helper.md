---
layout: post
title:  "IOT Energieverbruik helper"
featured: true
published: true
authors: [guest]
lowtech: false
midtech: false
hightech: true
DIT: true
DIY: true
CHALLENGE: false
moeilijkheidsgraad_1_3: 1
prijs_1_3: 1
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : true
licence: CCBY-NC-SA 
categories: [tinkering, wetenschappen, natuurkunde ]
image: assets/images/2020-06-30-IOT-Energieverbruikhulp/image6.jpeg
tijd: + 3 uur
print: assets/images/2020-06-30-IOT-Energieverbruikhulp/IOT_energieverbruik_helper.pdf
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-06-30-IOT-Energieverbruikhulp/IOT_energieverbruik_helper.pdf
materialen_dontshow: true
materialen: [

      ]
tools: [
      Computer,
      Micro-usb kabel,
      WiFi,
      Smartphone,
      3D-printer,
      Lijmpistool,
      ]
benodigdheden_opt: [
      ]
---
Maak je eigen IOT energieverbruik hulp, en krijg een melding op je smartphone als het licht of de verwarming nog aan staat wanneer er tussen een bepaald tijdsinterval niemand meer in de kamer is.

Leer hoe de ESP32 programmeert met de Arduino IDE
Ontdekt hoe je meldingen kan sturen naar je smartphone met Arduino.

Maaktijd: langer dan 3u.

Materiaalkost onder de 6 EUR.
 
Deze handleiding werd ontwikkeld door **Stijn Liekens** voor Maakbib


## Benodigdheden
<p style="margin: 0 0 0 0;"><strong>Materialen:</strong></p>

<div class="benodigdheden">
  <ul>
    <li><a href="https://www.kiwi-electronics.nl/pir-bewegingssensor)</li>PIR sensor(https://www.kiwi-electronics.nl/pir-bewegingssensor">PIR sensor</a></li>
    <li><a href="https://www.cheaptech.nl/myxl-ky-13-analog-temperature-sensor-module-voor-a.html">KY-013 temperatuur  sensor</a></li>  
    <li><a href="https://nl.banggood.com/20Pcs-5MM-Light-Dependent-Resistor-Photoresistor-GL5528-LDR-p-943459.html?gpla=1&gmcCountry=BE&currency=EUR&createTmp=1&utm_source=googleshopping&utm_medium=cpc_bgcs&utm_content=xibei&utm_campaign=xibei-pla-beg-pc-nl-all-0314&gclid=CjwKCAjw_LL2BRAkEiwAv2Y3SdOlPEAAnN2u16GF3x10iapwzTBTNUGWogxzv3UXWETyHte3GWtUWRoCeOwQAvD_BwE&cur_warehouse=CN">Photoresistor</a></li>
    <li>Mini Breadboard</li>
    <li>Draden</li>
    <li>Weerstenden (10k OHM en 220 OHM)</li>
    <li><a href="https://nl.banggood.com/Basic-Starter-Kit-UNO-R3-Mini-Breadboard-LED-Jumper-Wire-Button-With-Box-For-Geekcreit-for-Arduino-products-that-work-with-official-Arduino-boards-p-1161006.html?gpla=1&gmcCountry=BE&currency=EUR&createTmp=1&utm_source=googleshopping&utm_medium=cpc_bgcs&utm_content=xibei&utm_campaign=xibei-ssc-beg-nl-ele-1221&gclid=CjwKCAjw_LL2BRAkEiwAv2Y3SWfGPpbN1Vc-jm9PcLict3B1BX1qEFMdl5EISaTiZtk60txfWzG6jhoC7UsQAvD_BwE&cur_warehouse=CN">LED’s</a></li> 
    <li><a href="https://www.bol.com/nl/p/esp-wroom-32-esp32-esp-32s-ontwikkelbord-development-board-2-4-ghz-dual-mode-wifi-bluetooth-dual-cores-microcontroller-processor-geintegreerd-met-antenne-rf-amp-filter-ap-sta-voor-arduino-ide/9200000114634593/?country=BE">ESP-WROOM-32</a></li> 
 </ul>
</div>

![Materialen]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image7.png)

{% include benodigdheden.html %}


## Aan de slag

#### Arduino software configureren

 1. Start Arduino IDE op, Dit is het programma om de Arduino Code in te schrijven. En ziet er zo uit:  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image8.png)  
Als de Arduino IDE nog niet op je computer geïnstalleerd is, kan je het [hier](https://www.arduino.cc/en/Main/Software) gratis downloaden.

 2. Ga naar de Preferences, onder FILE → PREFERENCES  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image9.png)

 3. Copy Paste het volgende in het “Additional Boards Manager URLs” vak.  
    https://dl.espressif.com/dl/package_esp32_index.json  
    En druk op "OK".  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image10.png)  

 4. Open de Board Manager, onder TOOLS → BOARD: “….” → Boards Manager  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image11.png) 






<div class="border_boxmaakbib01_img" markdown="1">
## Weetjes

 * **` `**
 


#### Wil je meer weten over kabelbanen?
Uit volgende sites, en [wikipedia](https://www.wikipedia.org/), komen de foto's die we hier gebruikt hebben.

 - [bergundbahn.com](https://www.bergundbahn.com/bergbahnen/kabelbanen/info/kabelbanen-geschiedenis)
 - [lift-world.info](https://www.lift-world.info/)
 - [Van kabelbaan tot RopeCon](https://www.lowtechmagazine.be/2011/01/kabelbaan-kan-alle-vrachtwagens-van-de-weg-halen.html)

</div>


## STEM

In deze low tech activiteit komt heel wat techniek aan bod! We hebben in deze handleiding een eeuwenoude techniek leren kennen waarmee ravijnen en rivieren overgestoken kunnen worden en bergen beklommen worden. 
En je hebt vooral getraind op het veilig en nauwkeurig werken. 

Wat je hier geleerd hebt kan je gebruiken bij STEM uitdagingen in het thema transport. 

*`Weet je dat een met elektriciteit aangedreven kabelbaan één van de zuinigste transportmiddelen die er bestaan is? Ook op vlak terrein!`*

Op wetenschappelijk vlak staat hier mechanica centraal, om de werking van deze kabelbaan te begrijpen, hebben we wrijving, spankracht en de 3e wet van Newton nodig. Lees meer hieronder in het blauw kadertje. 
 
 
 
 
 
<div class="border_boxmaakbib03_img" markdown="1">
#### Hoe werkt het? 
Alles dat je nodig hebt, is een kabel, een motor, wielen en een beetje wetenschap!

Hoewel het een relatief eenvoudige constructie is, gebruikt een kabelbaan op ingenieuze wijze verschillende mechanische principes om de gondels voort te bewegen.

Hier de korte uitleg.

 * Twee wielen, het aandrijfwiel en het volgwiel, bevinden zich in een verankerde positie, waar ze enkel rond hun eigen as kunnen draaien.
 

</div>

#### Maak het je eigen
 * Kun je het sneller maken? 
 * Kun je een lijst van factoren geven die de werking van de kabelbaan beïnvloeden?
 * Gebruik je vergaarde kennis om een ander type kabelbaan te bouwen.


## Voorbeelden
Heb je een foto van je eigen kabelbaan? Stuur hem ons!
