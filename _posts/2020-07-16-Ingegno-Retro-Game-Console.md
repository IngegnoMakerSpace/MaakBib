---
layout: post
title:  "Retro Game Console"
featured: false
published: false
authors: [guest]
author_name: ""
lowtech: false
midtech: false
hightech: true
DIT: true
DIY: true
CHALLENGE: false
moeilijkheidsgraad_1_3: 2
prijs_1_3: 2
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : true
licence: CCBY-NC-SA
categories: [solderen, lasercutten, electronica, physical computing]
image: assets/images/2020-07-16-Ingegno-Retro-Game-Console/main.jpg
tijd: 3u+
print: 
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-07-16-Ingegno-Retro-Game-Console/Retro Gaming met Arduino.pdf
  - name: '2D Bestanden'
    file: https://github.com/ingegno/RetroGames/tree/master/IngegnoRetroGameConsole
  - name: 'Games (arduino code)'
    file: https://github.com/ingegno/RetroGames
tools: [
    Lijmpistool,
    Kleine schroevendraaier,
    Suikertje zoals op de foto,
    Soldeerbout en soldeer tin indien nodig
]
---

Maak je eigen game console waar je verschillende retro games kan op spelen. 

*Deze handleiding werd ontwikkeld door **Naam** voor Maakbib.*

## Benodigdheden

<p style="margin: 0 0 0 0;"><strong>Materialen:</strong></p>
<div class="benodigdheden">
  <ul>
    <li><a href="https://www.ebay.com/itm/371462246346?_trksid=p2057872.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT">Het ST7735 1.8” Color TFT scherm</a></li>
    <li>Arduino Nano</li>
    <li><a href="https://www.velleman.eu/products/view/?id=435544">Joystick</a></li>
    <li>2 Drukknoppen. Neem 2 verschillende kleuren!</li>
    <li>Batterij + Schuifschakelaar</li>
    <li>Draadjes</li>
 </ul>
</div>

![Materialen]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole2.jpg)

{% include benodigdheden.html %}

![Tools]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole3.jpg)

## Stap 1: Doosje lasercutten
Als je 1 game console wilt maken download je <a href="#">dit bestand</a>, maar als je zo veel mogelijk wilt laseren download je best <a href="#">het bestand met 10 doosjes</a>.

![ScreenshotSvg]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot1.png)
![gameconsole12]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole12.jpg)

## Stap 2: Doosje maken
Je begint bij de onderkant van het doosje waar deze 2 stukjes opgelijmt moeten worden.

![gameconsole4]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole4.jpg)

Nu moet je weten wat voor knop je gaat gebruiken. Er zijn 2 mogelijkheden te zien hier onderaan.

![gameconsole5]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole5.jpg)

![gameconsole6]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole6.jpg)
![gameconsole7]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole7.jpg)

Als je daarmee klaar bent kan je al de stukken één voor één aan elkaar lijmen, maar voorgeet niet dat de bovenkant nog niet mag gelijmt worden!

![gameconsole8]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole8.jpg)
![gameconsole9]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole9.jpg)

![gameconsole10]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole10.jpg)
![gameconsole11]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole11.jpg)

## Stap 3: De bedrading van de componenten
We gaan nu onderstaande connecties bij onze componenten doen.

![Bedrading]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/bedrading.png)

Voor het scherm eerst te testen kunnen we deze pinnen al aansluiten aan de arduino:

| 5V   - Vcc|
| Gnd  - Gnd|
| 8    - RESET|
| 9    - AO |
| 10   - CS |
| 11   - SDA |
| 13   - SCK |
| 3.3V - LED |

<br>
Nu kunnen we beginnen aan de anderen connecties.<br>
De arduino moet aan deze pinnen draadjes hebben:

![gameconsole13]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole13.jpg)

Voor de volgende stappen gaan we deze componenten nodig hebben. 

![gameconsole14]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole14.jpg)

Als we de bedrading bekijken op de afbeelding kunnen we al de arduino pinnen al correct gaan connecteren.

![Bedrading]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/bedrading.png)

![gameconsole15]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole15.jpg)

Al de Gnd draadjes doen we samen in zo één suiketje en al de Vcc draden ook.

![gameconsole16]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole16.jpg)

Om zeker te zijn dat het koper voor geen kortsluiting gaat zorgen als het allemaal in het doosje gaat, gaan we met soldeertin over het koper.

![gameconsole20]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole20.jpg)
![gameconsole17]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole17.jpg)

![gameconsole18]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole18.jpg)
![gameconsole19]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole19.jpg)

Nu dat we de soldeerbout hebben kunnen we ook de draadjes aan de schakelaar solderen.

![gameconsole21]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole21.jpg)

## Stap 4: Alles in het doosje
Nu dat we eigenlijk alles af hebben voor de laatste stappen kunnen we alles in het doosje monteren.

![gameconsole22]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole22.jpg)

Met het lijmpistool kan je voorzichtig en precies de componenten op de juiste plaats vastlijmen.

Nu dat alles op zijn plaats zit mag het deksel erop en kan je dit met bv. een rekken op zijn plaats houden.

![gameconsole23]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole23.jpg)

## Tijd voor een retro game!
Voor een game te kunnen spelen heb je de code nodig voor een game die je hieronder vind:<br>
<a href="https://github.com/ingegno/RetroGames">https://github.com/ingegno/RetroGames</a>

Om deze code op je console te zetten heb je 2 dingen nodig die hieronder worden uitgeledg.

**Arduino IDE**

De Arduino IDE moet je downloaden waar je dan de code van de .ino file moet pasten.
De IDE kan je hier downloaden: <a href="https://www.arduino.cc/en/main/software">Arduino Website</a>

Als je de IDE hebt zal het nog niet lukken. Je hebt de Adafruit libraries nodig.

**Adafruit labraries**

Als je in de Arduino IDE zit moet je naar Schets > Biblioteek gebruiken > Biblioteek beheren...

Hier kan je de libraries vinden: (type ST7735 in de zoekbalk)

![Screenshot2]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot2.png)

Nu is je console klaar om de game te spelen! Je kan de code uploaden door met een usb kabel die in de poort zit van de arduino op deze knop te drukken:<br>
![Screenshot3]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot3.png)

## Nu kan je spelen!

![gameconsole24]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole24.jpg)

