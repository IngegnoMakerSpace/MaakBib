---
layout: post
title:  "Retro Game Console"
featured: true
published: true
authors: [cri, ben]
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
categories: [solderen, lasercutten, elektronica, physical computing]
image: assets/images/2020-07-16-Ingegno-Retro-Game-Console/main.jpg
tijd: 3u+
print: assets/images/2020-07-16-Ingegno-Retro-Game-Console/Retro Gaming met Arduino.pdf
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-07-16-Ingegno-Retro-Game-Console/Retro Gaming met Arduino.pdf
  - name: '2D Bestanden'
    file: https://github.com/ingegno/RetroGames/tree/master/IngegnoRetroGameConsole
  - name: 'Games (arduino code)'
    file: https://github.com/ingegno/RetroGames
  - name: Test blokkencode
    file: assets/images/2020-07-16-Ingegno-Retro-Game-Console/Wandelende_sprite.xml
tools: [
    Lijmpistool,
    Kleine schroevendraaier,
    Suikertje zoals op de foto,
    Soldeerbout en soldeer tin indien nodig
]
---

Maak je eigen game console waar je verschillende retro games kan op spelen. 

*Deze handleiding werd ontwikkeld door **Cristina en Benny** voor Maakbib.*

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
Als je 1 game console wilt maken download je <a href="/assets/images/2020-07-16-Ingegno-Retro-Game-Console/IngegnoRetroGame.svg">dit bestand</a>, maar als je zo veel mogelijk wilt laseren download je best <a href="/assets/images/2020-07-16-Ingegno-Retro-Game-Console/IngegnoRetroGame10.svg">het bestand met 10 doosjes</a>.

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
**Om de componenten eerst te testen scroll naar onder en bekijk Stap 5 voor de Arduino IDE en bekijk daaronder dan Stap "Testen" voor te testen**

Nu dat we eigenlijk alles af hebben voor de laatste stappen kunnen we alles in het doosje monteren.

![gameconsole22]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole22.jpg)

Met het lijmpistool kan je voorzichtig en precies de componenten op de juiste plaats vastlijmen.

Nu dat alles op zijn plaats zit mag het deksel erop en kan je dit met bv. een rekken op zijn plaats houden.

![gameconsole23]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole23.jpg)

## Stap 5: Tijd voor een retro game!
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

Je moet ook nog in je IDE bij 'hulpmiddelen > board' Arduino Nano kiezen en bij 'hulpmiddelen > proccesor' de Old Booter

Nu is je console klaar om de game te spelen! Je kan de code uploaden door met een usb kabel die in de poort zit van de arduino op deze knop te drukken:<br>
![Screenshot3]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot3.png)

## Nu kan je spelen!

![gameconsole24]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole24.jpg)

## Testen
Je bent naar hier gekomen omdat je eerst je componenten wilt testen voordat je verder gaat.

Hier word er uitgelegd hoe we door middel van blokken code kunnen kijken of de joystick en het scherm werkt. De blokken code kan je dan omzetten naar arduino code die we in de Arduino IDE kunnen zetten (voor uitleg over de Arduino IDE ga naar Stap 5). Als de blokken code niet lukt kan je onze blokken code ook downloaden bij downloads.

Om te beginnen moet je op deze site zijn:<br>
<a href="https://blokkencode.ingegno.be/" target="_blanc">https://blokkencode.ingegno.be/</a>

We beginnen met de setup, we zeggen hier aan welke pin de knop zit van de joystick en aan welke pin de X en Y zitten. We geven ook mee aan de code dat we een Arduino Nano gebruiken en een TFT-Scherm. Je kan een digitale pin of een analoge sensor toevoegen door op het settings icoontje te klikken

![Screenshot4]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot4.png)

* Platform vind je onder 'Componenten'
* TFT-Scherm vind je onder 'Schermen'
* Drukknop 2-draads en analag sensor vind je onder 'In/Output'

Nu heb je deze funtie nodig:

![Screenshot5]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot5.png)

* Dit vind je onder 'Functies'

We beginnen met de code voor ``Arduino doet eerst``. We starten met een start scherm in te laden als we de console aan zetten. Hiervoor gaan we de achtergrond van het scherm aanpassen en 2 stukken tekst laten verschijnen. De "wacht 500 ms" zorgt ervoor dat we een halve seconden wachten voordat ``Games`` tevoorschijn komt.

![Screenshot6]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot6.png)

* TFT-Scherm en kleur blokken vind je onder 'Schermen'
* Wacht vind je onder 'Tijd'
* Text vind je onder 'Text'
* Getallen vind je onder 'Wiskunde'

Nu voegen we een blokje toe die zegt: zolang we niet op de joystick drukken gaan we niet verder. Dus als je op de joystick drukt gaan we verder.

![Screenshot7]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot7.png)

* Herhalen vind je onder 'Herhalen'
* Niet vind je onder 'Logica'
* Lees waarde knop vind je onder 'In/Output'

Het laatste stukje code dat in de ``Arduino doe eerst`` moet is het spel klaarzetten voordat het begint. We gaan al een sprite klaarzetten dat we dan laten kunnen doen bewegen. Daarna wacht de code 3 seconden voordat het spel begint.

![Screenshot8]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot8.png)

* Stel Xpos en Stel Ypos vind in onder 'Variabelen' en je kan zelf de variabel toevoegen

Nu gaan we naar ``Arduino herhaal voor altijd``. Deze code gaat de arduino blijven herhalen todat je hem uit zet. Maar we beginnen met een fucntie op te vragen. Deze funtie zal de joystick lezen vandaar noemt de funtie ``lees_joystick``.

![Screenshot10]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot10.png)
![Screenshot9]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot9.png)

* Deze funtie maak je aan door bij 'Functies' een opdracht te maken die je dan 'lees_joystick' noemt. Dan kan je het blokje 'lees_joystick' ook bij "Functies" vinden.

Nu schrijven we de code voor ``lees_joystick``. We gaan kijken op welke X,Y positie de joystick staat en zo kunnen we dan onze sprite in die richting laten gaan.

![Screenshot11]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot11.png)

* Als blokken vind je onder 'Logica' en kan je configureren door op het settings icoontje te klikken.

Nu we de plaats van de joystick weten kunnen we de sprite in die richting laten bewegen. We hebben enkele nieuwe variabelen nodig om te weten of de positie wel veranderd moet worden

![Screenshot12]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot12.png)

Als de nieuwe positie wel degelijk nieuw is en niet het zelfde gaan we verplaatsen.

![Screenshot13]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot13.png)

* Commentaar blokken zijn niet nodig en doen niets voor de code. Deze blokken zijn aleen voor jou om te helpen zeggen wat de code doet.

**Klaar!**<br>
Nu kan je de code copieëren die bij "Arduino Source Code" staat en in je Arduino IDE zetten.
Werkt jou code niet? De xml file staat bij downloads die kan je dan uploaden op de site.