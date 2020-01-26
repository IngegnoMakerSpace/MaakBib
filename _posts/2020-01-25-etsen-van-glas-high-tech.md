---
layout: post
title:  "Slimme Nutella Lamp: Etsen van glas - High Tech"
authors: [fien, cri]
lowtech: false
midtech: false
hightech: true
DIT: true
DIY: false
CHALLENGE: false
categories: [ chemie, snijplotter, 2D-tekenen, Physical Computing ]
image: assets/images/2020-01-25-etsen-van-glas-low-tech/workshop-glas-ets-vosje.jpg
print: assets/images/2020-01-25-etsen-van-glas-low-tech/Handleiding_glas etsen.pdf
downloads:
  - name: 'Stappenplan glas etsen met etspasta'
    file: assets/images/2020-01-25-etsen-van-glas-low-tech/Handleiding_glas etsen.pdf
  - name: 'blokkencode xml file'
    file: https://raw.githubusercontent.com/IngegnoMakerSpace/MaakBib/master/assets/images/2020-01-25-etsen-van-glas-high-tech/glasets_licht.xml
  - name: 'Arduino nano code'
    file: https://raw.githubusercontent.com/IngegnoMakerSpace/MaakBib/master/assets/images/2020-01-25-etsen-van-glas-high-tech/glasets_licht/glasets_licht.ino
benodigdheden:  [
  Neopixel LED,
  DHT11 Temp/RH sensor,
  Arduino Nano, 
  LDR sensor + resistor, 
  draadjes & soldeersel,
]

---

Ga aan de slag met glas ets om een slimme Nutella Lamp te maken. Volg de temperatuur op in je kamer.

Glas etsen met etspasta is niet moeilijk maar je moet wel heel zorgvuldig te werk gaan want je werkt met een bijtend middeltje. 

Wist je dat de mogelijkheid om glas met zuur te etsen werd in 1670 bij toeval in Duitsland ontdekt? De kunst van het glas etsen bereikte vervolgens haar hoogtepunt in de negentiende en twintigste eeuw.

## Benodigdheden

Je hebt de benodigdheden nodig van de activiteit [Glas Etsen]({{ site.baseurl }}/etsen-van-glas-mid-tech/), maar met andere elektronische onderdelen.

Je hebt extra nodig:


## Maak je Nutella glas lamp

Volg de handleiding van de activiteit [Glas Etsen]({{ site.baseurl }}/etsen-van-glas-mid-tech/), tot aan het maken van het electrisch circuit. 

Je hebt nu je nutella pot.

TODO: foto van Nutella pot met ets sjabloon


## Slimme circuit maken voor in je pot

Je pot is klaar, nu nog deze omtoveren in een slimme lampje ingewerkt in het deksel. 

<div class="border_boxmaakbib01_img" markdown="1">
#### Wat doet de lamp?
We maken een lamp die licht geeft op basis van het licht in de kamer: veel licht, dan niet aan, schemerlicht, dan helder zodat licht toch te zien is, donker, dan zwak om sfeer te creeren.

We meten de temperatuur van de kamer ook, en passen hiermee de kleur van het licht aan. 20 graden of meer: rode kleuren,  16 graden of minder, blauwe kleuren. Als het de optimale 18 graden is, dan regenboog effect met alle kleuren.
</div>

#### Het Circuit

Neem volgende componenten:

* 1 Arduino Nano
* 1 Arduini Nano houder (optioneel)
* 1 DHT11 of DHT22 op een PCB
* 1 LDR (hier 16 kOhm)
* 1 weerstand (hier 16 kOhm)
* 1 neopixel


![componenten]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/componenten.jpg)

Start met het bepalen van welke weerstand nodig is om de LDR uit te lezen. Dit doe je door de weerstandwaarde te meten met een multimeter terwijl je de LDR met je vinger bedekt (in het donker dus). Schakel dan de LDR in serie met een weerstand van dezelfde waarde zoals verder beschreven. 

Een LDR geeft een verschillende weerstandwaarde terug afhankelijk van de hoeveelheid lichtinval. Als het donker is, is de weerstand het grootst. 
Als we onze LDR uitmeten met een multimeter, heeft deze een weerstand van `16 kOhm`. We schakelen hem in serie met een andere weerstand van ongeveer sterkte, in ons geval een  `15 kOhm`, en maken volgend circuit met de componenten:

![fritzing circuit]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/circuit.png)

De LDR is verbinden met de GND pin en staat in serie met de weerstand die dan met de `5V` verbonden is. Je verbindt dan ook de twee (zie schema) met de analoge `A0` pin. Hiermee meten we de lichtinval. Als het donker is, zijn beide weerstanden gelijk, en wordt het voltage dus in twee gesplitst. We meten dan aan de `A0` pin `2,5 V`. Is er veel licht, dan is de LDR een veel lagere weerstand dat de `16 kOhm`, en meten we dus aan de `A0` pin een waarde die dichter bij `0 V` ligt dan bij `2,5 V`.

Een neopixel heeft een _in_ en een _uit_ kant. De _in_ kant heeft 3 connecties, de GND, de VCC welke naar `5V` gaat, en de input meestal aangeduid met `Din`, welke we verbinden met pin `D2` van de nano.

De DHT11 of DHT22 heeft 4 pinnen. Koop deze evenwel op een PCB, dan zijn er 3 pinnen en is constructie gemakkelijker. Een pin is - of GND, een pin + of VCC welke opnieuw naar `5V` gaat, en dan een out pint welke je verbindt met `D8` van de nano. De DHT22 meet temperatuur nauwkeuriger dan de DHT11, en is daarom een beetje duurder.

Maak je constructie zodat alles in het deksel past, en je nog stroom kunt voorzien aan de Arduino. Hiertoe moet je solderen (TODO: link naar solderen )

Het elektronische circuit:

![circuit]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/etsen_glas_hightech_schema.png)

#### Constructie van Circuit
Om het circuit te maken, heb je naast de componenten, 7 draadjes nodig alsook een soldeerbout, kniptang, striptang en kleine platte schroevendraaier. 

Indien mogelijk, gebruik rode draden voor de aansluitingen naar 5V en zwarte draden voor de aansluitingen naar GND. 

Knip de draadjes ongeveer 10 cm lang en strip de uiteinden, vertin ze dan.  
Vertin dan de pootjes van de DHT22 en de eilandjes op de neopixel (enkel de 3 eilandjes aan de _in_ kant zal je nodig hebben). 
Soldeer dan de draden eraan.
Gebruik krimpkousenom kortsluitingen te vermijden en je werk proper te houden.
Soldeer een poot van de LDR aan een poot van de weerstand en soldeer hierbij een draad die je dan met de A0 verbindt. 

![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie02.jpg)
![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie03.jpg)

![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie01.jpg)
![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie11.jpg)

Beslis waar alles moet komen op het dop en gebruik een stift om aan te duiden waar de gaten voor het bevestigen van de stukken moeten komen. Maak dan ook een gat om de neopixel aan de binnenkant van het dop te kunnen doen. Steek de neopixel erdoor en connecteer dan de draden naar de juiste pinnen zoals aangegeven in het schema. 

![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie04.jpg)
![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie06.jpg)
![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie07.jpg)

Maak alle andere connecties zoals op het schema en gebruik dan M3 moeren (bij voorkeur nylon moeren) om alles aan het dop te bevestigen. 
De constructie zou nu zoals volgt moeten eruit zien,met de neopixel aan de binnekant van het dop.

![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie10.jpg)
![constructie]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/constructie09.jpg)

Heb je geen moeren? Dan kan je ook lijmen. 

#### Programmatie

We programmeren nu de nano om als nachtlamp te kunnen dienen. We gebruiken hiervoor [blokkencode.ingegno.be](http://blokkencode.ingegno.be). Een basishandleiding van deze tool vind je op de site van [Ingegno](http://ingegno.be/realisations/blockly4arduino.html).

Begin met het definieren van je Arduino Nano en alle gebruikte pinnen, alsook seriële monitor output om de gemeten waarden te kunnen opvolgen:

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_01.png)

Maak een effect om elke seconde de lichtinval te meten en de temperatuur te meten:

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_02.png)

In het setup gedeelde van de code (`Arduino doe eerst`) geven we beginwaarden voor alle variabelen, en zorgen we dat de neopixel af staat bij opstarten.

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_03.png)

Vervolgens maken we een fuctie die de gemeten lichtinval omzet naar de helderheid die we de neopixel willen geven. We  voorzien 4 mogelijkheden, waarbij we bij dag de helderheid op 0 zetten, dus licht uit! Je kan de waarden van de helderheid (nacht, schemer, vallicht) aanpassen naar getallen tussen 0 en 255 indien je licht te zwak of helder vindt.

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_04.png)

Onze loop zal er dan als volgt uitzien:

1. meet licht
2. meet temperatuur
3. bepaal wat de helderheid van de pixel moet zijn
4. bereken de nieuwe kleur die de pixel moet aannemen
5. fade van oude kleur naar nieuwe kleur

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_05.png)

De laatste twee procedures moeten we nog maken. De procedure `bepaal_volgende_kleur` is een `effect` welke om de 2 seconden een nieuwe kleur berekend. Welke kleur dit is zal afhankelijk zijn van de temperatuur:

1. als dag: pixel uit
2. als > 20°C, dan is het te warm, we tonen een combinatie van rood en groen als volgende kleur. Rood zal overheersen.
3. als < 17°C, dat is het te koud in je kamer. We tonen een combinatie van blauw en groen als volgende kleur. Blauw zal overheersen
4. anders is de temperatuur perfect! We tonen een regenboogeffect die door alle kleuren op een aangename manier gaat.

De procedure om dit te doen is:

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_06.png)

vervolg:

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_07.png)

Om de regenboog te maken gebruiken we een teller. Om de twee seconden verhoogt de waarde van de teller met 1, en bekomen we een nieuwe kleur in onze regenboog. We doen dit als volgt:

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_08.png)

We zijn er bijna! We hebben een oude kleur in de variabelen `R`, `G` en `B`, en de nieuw berekende kleur in de `Nieuw` variabelen. Elke twee seconden is er een nieuwe kleur, en we hebben de tijd bijgehouden waarop dit gebeurde met de variabele `tijdKleurBepaald`. We faden van de oude in de nieuwe kleur met een effect die elke 100 milliseconden loopt en over 1 seconde fade van oud naar nieuw, dan de voor 1 seconde de nieuwe kleur toont.

Dit doen we zo:

![programma]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-high-tech/programma_09.png)

Dit is het. Je vindt de xml file van deze code om op te laden op [blokkencode.ingegno.be](http://blokkencode.ingegno.be) in de Downloads, alsook de ino file die gegenereerd wordt. Je kan deze aanpassen zoals je zelf wil! 

## Voorbeelden
Heb je een foto van je glasversiering? Stuur hem ons!