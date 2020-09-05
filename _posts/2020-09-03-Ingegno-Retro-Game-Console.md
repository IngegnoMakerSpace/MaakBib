---
layout: post
title:  "Retro Game Console"
featured: false
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
    <li><a href="https://www.amazon.de/gp/product/B07VBY34FF">Het ST7735 1.8” Color TFT scherm</a></li>
    <li>Arduino Nano en usb kabel</li>
    <li><a href="https://www.amazon.de/gp/product/B07D5522B6">Arduino Nano houder</a></li>
    <li><a href="https://www.velleman.eu/products/view/?id=435544">Joystick</a></li>
      <li>2 Drukknoppen. Neem 2 verschillende kleuren! Gebruik <a href="https://www.amazon.de/gp/product/B078ZDK6KZ">losse drukknop</a> of <a href="https://www.amazon.de/gp/product/B0847S8CDR">drukknop op PCB</a></li>
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

Nu moet je weten wat voor knop je gaat gebruiken. Er zijn 2 mogelijkheden, PCB knoppen gebruiken (links) of losse knoppen gebruiken (rechts) welke je met de houtstukjes moet verhogen, zie hieronder.

![gameconsole5]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole5.jpg)

![gameconsole6]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole6.jpg)
![gameconsole7]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole7.jpg)

Als je daarmee klaar bent kan je al de stukken één voor één aan elkaar lijmen, maar vergeet niet dat de bovenkant nog niet mag gelijmd worden!

![gameconsole8]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole8.jpg)
![gameconsole9]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole9.jpg)

![gameconsole10]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole10.jpg)
![gameconsole11]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole11.jpg)

## Stap 3: De bedrading van de componenten
We gaan nu onderstaande connecties bij onze componenten doen.

![Bedrading]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/bedrading.png)

Om het scherm eerst te testen kunnen we deze pinnen al aansluiten aan de Arduino Nano:

| **Nano** |   |**TFT Scherm** |
|:--------:| --- |:-------------:|
| 5V  | | Vcc|
| Gnd | | Gnd|
| 8   | | RESET|
| 9   | | AO |
| 10  | | CS |
| 11  | | SDA |
| 13  | | SCK |
| 3.3V | | LED |

<br>
Nu kunnen we beginnen aan de anderen connecties.<br>
De arduino moet aan deze pinnen draadjes hebben:

![gameconsole13]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole13.jpg)

Voor de volgende stappen gaan we deze componenten nodig hebben. 

![gameconsole14]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole14.jpg)

Als we de bedrading bekijken op de afbeelding kunnen we al de arduino pinnen al correct gaan connecteren.

![Bedrading]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/bedrading.png)

Gebruik suikertjes, of soldereer en isoleer met krimpkous, om te verhinderen dat je meer dan 2 draden in een connectie op de Arduino Nano moet bevestigen.

![gameconsole15]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole15.jpg)

Al de **GND** draadjes doen we samen in zo één suiketje en al de **Vcc** draden ook.

![gameconsole16]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole16.jpg)

Om zeker te zijn dat losse koperfilamenten voor geen kortsluiting gaan zorgen als het allemaal in het doosje gaat, ga je met soldeertin over de draaduiteindes. Zie de foto's hieronder:

![gameconsole20]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole20.jpg)
![gameconsole17]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole17.jpg)

![gameconsole18]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole18.jpg)
![gameconsole19]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole19.jpg)

Nu dat we de soldeerbout hebben kunnen we ook de draadjes aan de schakelaar solderen. Controleer waar de schakelaar zal bevestigd worden, zodat te draadejs lang genoeg zijn.

![gameconsole21]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole21.jpg)

## Stap 4: Alles in het doosje
**TEST voor je alles vastlijmt. Om te testen, bekijk Stap 5 hieronder om te leren hoe de Arduino IDE te gebruiken, en bekijk dan het deel "Testen"**

Werkt alles? Dan kun je alles in het doosje monteren.

![gameconsole22]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole22.jpg)

Met het lijmpistool kan je voorzichtig en precies de componenten op de juiste plaats vastlijmen. Het scherm lijm je vast op de bovenplaat.

Nu dat alles op zijn plaats zit mag het deksel erop en kan je deze met bv. een elastiek op zijn plaats houden. Lijm de doos maar helemaal dicht als je zeker bent dat je een game kunt opladen en de console werkt.

![gameconsole23]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole23.jpg)

## Stap 5: Tijd voor een retro game!
Om een game te kunnen spelen heb je de code nodig voor een game. Je vindt op onze repo code voor snake, pacman, pong en meer. Deze repo vind je hier:
<a href="https://github.com/ingegno/RetroGames">github.com/ingegno/RetroGames</a>.

Om deze code op je console te zetten heb je 2 dingen nodig die hieronder worden uitgeledg.

**Arduino IDE**

De Arduino IDE moet je downloaden, en is het programma waarmee je code kunt aanpassen, opslaan als een `.ino file`, en opladen naar de Arduino Nano als deze met de usb kabel met je computer verbonden is.
De IDE kan je downloaden van de <a href="https://www.arduino.cc/en/main/software">Arduino Website</a>

Naast deze Arduino IDE, hebben we ook code fragmenten nodig die speciaal gemaakt zijn om met onze componenten te kunnen spreken. Dit noemt men **bibliotheken**, of in het Engels, *libraries*. De volgende stap is deze dus downloaden en installeren.

**Adafruit labraries**

In de Arduino IDE, ga naar menu **Schets > Biblioteek gebruiken > Biblioteek beheren...**

Hier kun je de libraries zoeken, en installeren. Specifiek dien je te zoeken op `ST7735` via de zoekbalk, en de library ervoor te installeren:

![Screenshot2]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot2.png)

**Nano Board Kiezen**

De Arduino IDE kan code maken voor veel verschillende microcontrollers. We moeten de IDE dus laten weten dat wij specifiek met een Arduino Nano werken.

Je moet ook hiervoor in de IDE in het menu **hulpmiddelen > board**, de `Arduino Nano` kiezen en in menu **hulpmiddelen > proccesor** voor gewone Arduino Nano's de optie `ATMega328P (Old Booter)`. Heb je een ander type Nano dan ons, moet je mogelijks een andere processor kiezen!

Nu is je console en de Arduino IDE klaar! Je kan een game van <a href="https://github.com/ingegno/RetroGames">RetroGames</a> opladen door de code ervan te downloaden, de `ino` file van het spel te openen in de Arduino IDE, de Arduino Nano te verbinden met een usb kabel aan je PC, en in menu **hulpmiddelen > poort** te poort te selecteren die er extra bijkomt na het inpluggen van deze usb kabel.  Het opladen naar de Nano zelf doe je door op de opladen knop te drukken:<br>
![Screenshot3]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot3.png)

## Nu kan je spelen!

![gameconsole24]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/gameconsole24.jpg)

## Testen
Je bent naar hier gekomen omdat je eerst je componenten wilt testen voordat je verder gaat.

Hier word er uitgelegd hoe we door middel van blokken code kunnen kijken of de joystick en het scherm werkt. De blokken code kan je dan omzetten naar arduino code die we in de Arduino IDE kunnen zetten (voor uitleg over de Arduino IDE ga naar Stap 5). Als de blokken code niet lukt kan je onze blokken code ook downloaden bij downloads.

Om te beginnen moet je op deze site zijn: <a href="https://blokkencode.ingegno.be" target="_blanc">blokkencode.ingegno.be/</a>

We beginnen met de setup, we zeggen hier aan welke pin de knop zit van de joystick en aan welke pin de X en Y richting van de joystick bevestigd zijn. We geven ook mee aan de code dat we een Arduino Nano gebruiken en een TFT-Scherm. Je kan een digitale pin of een analoge sensor toevoegen door op het blauwe settings icoontje in het arduino blok te klikken

![Screenshot4]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot4.png)

* Platform vind je onder 'Componenten'
* TFT-Scherm vind je onder 'Schermen'
* Drukknop 2-draads en analog sensor vind je onder 'In/Output'

Nu heb je deze functie nodig:

![Screenshot5]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot5.png)

* Dit vind je onder 'Functies'

We beginnen met de code voor `Arduino doe eerst`. We starten met een start scherm in te laden als we de console aan zetten. Hiervoor gaan we de achtergrond van het scherm aanpassen en 2 stukken tekst laten verschijnen. De *wacht 500 ms* zorgt ervoor dat we een halve seconde wachten voordat `Games` tevoorschijn komt. **ms** staat immers voor milliseconden, dus duizendsten van seconde.

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

* **Stel _item_ in op** vindt je onder 'Variabelen' en laat je toe zelf opslagnamen toe te voegen. Deze kunnen een waarde bevatten, en noemt men variabelen (omdat de waarde kan veranderen, dus variabel is). Zo kun je door _item_ te wijzigen in een andere naam, **Stel Xpos in** en **Stel Ypos in** aanmaken.

Nu gaan we naar `Arduino herhaal voor altijd`. Deze code gaat de arduino blijven herhalen todat je hem uit zet. Maar we beginnen met een fucntie op te vragen. Deze funtie zal de joystick lezen vandaar noemt de funtie `lees_joystick`.

![Screenshot10]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot10.png)
![Screenshot9]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot9.png)

* Deze funtie maak je aan door bij 'Functies' een opdracht te maken die je dan 'lees_joystick' noemt. Daarna kan je het blokje 'lees_joystick' ook bij "Functies" vinden, en dan het toevoegen aan het `Arduino herhaal voor altijd` blok.

Nu schrijven we de code voor `lees_joystick`. We gaan kijken op welke X,Y positie de joystick staat en zo kunnen we dan onze sprite in die richting laten gaan.

![Screenshot11]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot11.png)

* Het **Als blok** vind je onder 'Logica' en kan je configureren door op het blauwe settings icoontje te klikken.

Nu we wetenin welke richting de speler de joystick duwt, kunnen we de sprite in die richting laten bewegen. We hebben enkele nieuwe variabelen nodig om te weten of de positie wel veranderd moet worden, immers aan de rand van het scherm kun je niet verder bewegen!

![Screenshot12]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot12.png)

Als de nieuwe positie wel degelijk nieuw is en niet het zelfde gaan we verplaatsen.

![Screenshot13]({{ site.baseurl }}/assets/images/2020-07-16-Ingegno-Retro-Game-Console/screenshot13.png)

* Commentaar blokken zijn niet nodig en doen niets voor de code. Deze blokken zijn er alleen voor jou om te helpen herinneren waarvoor de code dient.

**Klaar!**<br>
Nu kan je de code kopiëren die in de rechterkolom staat onder "Arduino Source Code" en plakken in een **lege** schets in je Arduino IDE. Druk op de upload knop om het op je console te plaatsen, en test je joystick en het scherm zo. 

Werkt jou code niet? De blokken op <a href="https://blokkencode.ingegno.be/" target="_blanc">blokkencode.ingegno.be</a> kun je opslaan als een `xml` file (via knop rechtsboven), en zo delen met anderen. Onze test xml files vind je bij <a href="https://github.com/ingegno/RetroGames/tree/master/voorbeelden" target="_blanc">de voorbeelden in de repo</a>. Je kan ze downloaden en opladen in <a href="https://blokkencode.ingegno.be/" target="_blanc">blokkencode.ingegno.be</a> via de knop rechtsboven.
