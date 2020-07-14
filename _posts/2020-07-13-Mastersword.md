---
layout: post
title:  "Mastersword"
featured: false
published: false
authors: [guest]
author_name: "Steven van Durm"
lowtech: false
midtech: false
hightech: true
DIT: true
DIY: false
CHALLENGE: false
moeilijkheidsgraad_1_3: 2
prijs_1_3: 2
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : true
licence: CCBY-NC-SA 
categories: [solderen, elektronica, arduino, lasercutter, 3D-printen]
image: assets/images/2020-07-13-Mastersword/mastersword2.jpg
tijd: 3u+
print: assets/images/2020-07-13-Mastersword/Makers-voor-Makers-Master-Sword.pdf
downloads: 
  - name: 'Handleiding'
    file: assets/downloads/2020-07-13-Mastersword/Makers-voor-Makers-Master-Sword.pdf
  - name: 'Arduino Code'
    file: assets/downloads/2020-07-13-Mastersword/Mastersword/Mastersword.ino
  - name: '3D Bestanden'
    file: https://www.thingiverse.com/thing:4414570

materialen_dontshow: true
materialen: [
      Trinket,
      Batterij,
      LiPoly Backpack,
      Switch,
      Koperdraad,
      Tinsoldeer,
      Ledstrip (2 meter),
      PLA (wit, goud en kleur naar keuze),
      lange buttons,
      M2 boutjes,
      Plaat Acrylic (3mm dik),
      Micro-USB Kabel
      ]
tools: [
      3D Printer,
      Lijmpistool,
      Lasercutter,
      Soldeerbout,
      Kruis Schroevendraaier,
      KnipTang,
      Knijptang,
      Strip tang
      ]
---

Met dit project maak je het legendarische “Master Sword” uit “The legend of Zelda” na doormiddel van 3D-printing, lasercutting en arduino. 
Kennis van programmeren is niet vereist, 
maar het is wel aangeraden als je aanpassingen wilt maken.

Deze handleiding werd ontwikkeld door **Steven van Durm** voor Maakbib.

## Benodigdheden

<p style="margin: 0 0 0 0;"><strong>Materialen:</strong></p>

<div class="benodigdheden">
  <ul>
    <li><a href="https://www.adafruit.com/product/2000">Trinket</a></li>
    <li><a href="https://www.adafruit.com/product/1317">Batterij</a></li>
    <li><a href="https://www.adafruit.com/product/2124">LiPoly Backpack</a></li>
    <li><a href="https://www.gotron.be/componenten/schakelmat/schakelaars/toestel/toestelschakelaar-enkelpolig-on-off-spst-6a-250v-zwart.html">Switch</a></li>
    <li><a href="https://www.gotron.be/soepele-montagedraad-set-90m.html">Koperdraad</a></li>
    <li><a href="https://www.gotron.be/meten-solderen/solderen/soldeertin/tinsoldeer-1mm-500g-loodvrij.html">Tinsoldeer</a></li>
    <li><a href="https://www.adafruit.com/product/1138?length=2">Ledstrip</a> (2 meter)</li>
    <li><a href="https://www.trideus.be/nl/consumables/ice-filaments/pla/">PLA</a> (wit, goud en kleur naar keuze)</li>
    <li><a href="https://www.adafruit.com/product/1490">lange buttons</a></li>
    <li><a href="https://www.gotron.be/bout-m2-lengte-4mm-100-stuks-metaalschroef-met-cilindrische-kop.html">M2 boutjes</a></li>
    <li>Plaat Acrylic (3mm dik)</li>
    <li>Micro-USB Kabel die data kan overzetten</li>
 </ul>

</div>

{% include benodigdheden.html %}

## 3D-Printing
Ik ga ervan uit dat je succesvol kan 3D printen en dat de instellingen juist staan omdat dit
voor elke 3D printer anders is. Anders kan je voor komende stappen terecht bij je lokale
Fablab. Zij helpen je ook om te starten met 3D printing.

Omdat we het wiel niet opnieuw moeten uitvinden, ben ik vertrokken van een bestaand
model en heb ik dit gedeeltelijk aangepast zodat de elektronica erin past.

Het originele ontwerp zou je ook moeten <a href="https://www.thingiverse.com/thing:2886473">downloaden</a> voor het gevest van het zwaard.

(inspiratie voor de elektronica)<br>
<a href="https://www.thingiverse.com/thing:2526427">https://www.thingiverse.com/thing:2526427</a>

Mijn bestanden kan je hieronder vinden.<br>
<a href="https://www.thingiverse.com/thing:4414570">https://www.thingiverse.com/thing:4414570</a>

| Toppen van het blad (1x met gleuf, 1x zonder)<br>Kleur: Wit | ![3DPrinten1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto1.png) |
| tussenstukken van het blad (1x met gleuf, 1x zonder)<br>Kleur: Wit | ![3DPrinten2]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto2.png) |
| Onderste deel van het blad (2x)<br>Kleur: Wit | ![3DPrinten3]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto3.png) |
| Guard (2x)<br>Kleur: Goud | ![3DPrinten4]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto4.png) |
| Diamond (2x)<br>Kleur: Goud | ![3DPrinten5]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto5.png) |
| Koppelstuk gevest<br>Kleur: Eigen keuze | ![3DPrinten6]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto6.png) |
| Panneerstang deel (2x)<br>Kleur: Eigen keuze | ![3DPrinten7]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto7.png) |
| Vleugels (2x)<br>Kleur: Eigen keuze | ![3DPrinten8]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto8.png) |
| Koppelstuk voor de greep<br>Kleur: Eigen keuze | ![3DPrinten9]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto9.png) |
| Koppelstuk voor de greep<br>Kleur: Eigen keuze | ![3DPrinten10]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto10.png) |
| Koppelstuk voor de greep<br>Kleur: Eigen keuze | ![3DPrinten11]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto11.png) |
| Greep<br>Kleur: Eigen keuze | ![3DPrinten12]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto12.png) |
| Greep<br>Kleur: Eigen keuze | ![3DPrinten13]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto13.png) |
| Knop (2x)<br>Kleur: Eigen keuze | ![3DPrinten14]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto14.png) |
| Knop<br>Kleur: Eigen keuze | ![3DPrinten15]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto15.png) |
| Deksel batterij<br>Kleur: Eigen keuze | ![3DPrinten17]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto17.png) |
| Knob (2x)<br>Kleur: Eigen keuze | ![3DPrinten18]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto18.png) |

## Lasercutting
Hiervoor kan je terecht bij je lokale Fablab

Met het lasercutten maken we een versteviging van het blad van het zwaard, zodat deze
minder snel kan breken.

Voor het lasercutten, gebruik je de acrylic plaat en de SVG die in de bijlage zitten.
(Rechthoek 25 x 85 verenigd met een rechthoek van 37x 538)

![Lasercutting1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Lasercutting1.png)

## Programmeren
Voordat we kunnen programmeren, moeten we eerst een aantal bestanden downloaden en
installeren.
We zullen beginnen met arduino en de adafruit packages.

Arduino:<br>
<a href="https://www.arduino.cc/en/Main/Software">https://www.arduino.cc/en/Main/Software</a>

Adafruit packages:<br>
<a href="https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide">https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide</a>

Om ervoor te zorgen dat we bestanden kunnen uploaden naar de trinket, moeten we op
windows nog een bootloader installeren. Daarna moeten we ook nog een aantal instellingen
wijzigen onder de tab “Hulpmiddellen” .

We maken gebruik van USB en niet FTDI, let hiervoor op tijdens de tutorial van adafruit en
voor de instellingen.

In de onderstaande link staat er een goede tutorial van hoe je dit doet.<br>
<a href="https://learn.adafruit.com/introducing-pro-trinket">https://learn.adafruit.com/introducing-pro-trinket</a>

In arduino is er een bepaalde library die je moet toevoegen voor de ledstrip. Op de website
van adafruit vind je een goede tutorial terug.<br>
<a href="https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation">https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation</a>

Hieronder vind je de code terug van het project. Deze kan je in de arduino software copy
pasten maar zorg er wel voor dat er voor de rest geen code in staat.
Je mag deze code uploaden naar de trinket.
Dit zou moeten lukken, als je alle tutorials gevolgd hebt.

Voor diegene die geïnteresseerd zijn, leg ik de code verder uit. Zoniet, mag je naar montage
Deel 1 gaan.

**Code:**
```c
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 9
#define PIN2 10
#define NUMPIXELS 41
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
const int button1Pin = 4;
const int button2Pin = 8;
const int button3Pin = 12;
boolean button2Pressed = false;
boolean button3Pressed = false;
int color = 0;
uint32_t currentColor = pixels.Color(0, 0, 255);
void setup() {
    #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
    #endif
    pinMode(button1Pin, INPUT_PULLUP);
    pinMode(button2Pin, INPUT_PULLUP);
    pinMode(button3Pin, INPUT_PULLUP);
    pixels.begin();
    pixels.setBrightness(50);
    pixels2.begin();
    pixels2.setBrightness(50);
}
void loop() {
    if (color == 0 ) {
        currentColor = pixels.Color(0, 0, 255);
    }
    else if (color == 1 ) {
        currentColor = pixels.Color(255, 0, 0);
    }
    else if (color == 2 ) {
        currentColor = pixels.Color(0, 255, 0);
    }
    else if (color == 3 ) {
        currentColor = pixels.Color(100, 100, 0);
    }
    else if (color == 4 ) {
        currentColor = pixels.Color(0, 255, 255);
    }
    else if (color == 5 ) {
        currentColor = pixels.Color(100, 0, 100);
    }
    else if (color == 6 ) {
        currentColor = pixels.Color(100, 100, 100);
    }
    if (digitalRead(button1Pin) != LOW) {
        for (int i = 0; i < NUMPIXELS; i++) {
            pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.
            pixels2.setPixelColor(i, pixels2.Color(0, 0, 0)); // Moderately bright green color.
            pixels.show(); // This sends the updated pixel color to the hardware.
            pixels2.show();
        }
    } else {
        for (int i = 0; i < NUMPIXELS; i++) {
            pixels.setPixelColor(i, currentColor); // Moderately bright green color.
            pixels2.setPixelColor(i, currentColor); // Moderately bright green color.
            pixels.show();
            pixels2.show();
            delay(10);
            if(digitalRead(button1Pin) != LOW){
                break;
            }
        }
    }
    if (digitalRead(button2Pin) == LOW && button2Pressed == false) {
        button2Pressed = true;
        color--;
        if (color <= -1) {
            color = 7;
        }
    } else {
        button2Pressed = false;
    }
    if (digitalRead(button3Pin) == LOW && button3Pressed == false) {
        button3Pressed = true;
        color++;
        if (color >= 7) {
            color = 0;
        }
    }
    else {
        button3Pressed = false;
    }
}
```
**Uitleg Code:**
```c
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
```
* Nodige code om de library voor de ledstrip te importeren en te doen werken

```c
#define PIN 9
#define PIN2 10
#define NUMPIXELS 41
```
* We kennen hier de Pins van de ledstrips toe en het aantal LEDs dat we gebruiken (Pixels = LEDS)

```c
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
```
* Aanmaken van de ledstrip objecten met de namen “pixels” en “pixels2”

```c
const int button1Pin = 4;
const int button2Pin = 8;
const int button3Pin = 12;
boolean button2Pressed = false;
boolean button3Pressed = false;
```
* Aanmaken van de variabellen van de pinnen van de knoppen en statussen van de
knoppen.

```c
int color = 0;
uint32_t currentColor = pixels.Color(0, 0, 255);
```
* Aanmaken van de variabellen voor de kleur van de ledstrip. (color = nummer in
een kleur lijst, currentColor = specifieke kleurwaarde)

```c
void setup() {
```
* Setup code, deze wordt maar 1 keer uitgevoerd in het begin

```c
#if defined (__AVR_ATtiny85__)
if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
```
* Deze code is nodige omdat we met een trinket werken.

```c
pinMode(button1Pin, INPUT_PULLUP);
pinMode(button2Pin, INPUT_PULLUP);
pinMode(button3Pin, INPUT_PULLUP);
```
* We zeggen hoe we het signaal van de knoppen willen uitlezen

```c
pixels.begin();
pixels.setBrightness(50);
pixels2.begin();
pixels2.setBrightness(50);
```
* Opstarten van de ledstrips en de helderheid instellen (hoe groter, hoe sneller de
batterij leegloopt)

```c
void loop() {
```
* Loop code, deze code blijft zich herhalen na de setup code.

```c
if (color == 0 ) {
currentColor = pixels.Color(0, 0, 255);
}
else if (color == 1 ) {
currentColor = pixels.Color(255, 0, 0);
}
else if (color == 2 ) {
currentColor = pixels.Color(0, 255, 0);
}
else if (color == 3 ) {
currentColor = pixels.Color(100, 100, 0);
}
else if (color == 4 ) {
currentColor = pixels.Color(0, 255, 255);
}
else if (color == 5 ) {
currentColor = pixels.Color(100, 0, 100);
}
else if (color == 6 ) {
currentColor = pixels.Color(100, 100, 100);
}
```
* Een check doen welke kleur we moeten tonen en deze toekennen aan de
variabele.

```c
if (digitalRead(button1Pin) != LOW) {
for (int i = 0; i < NUMPIXELS; i++) {
pixels.setPixelColor(i, pixels.Color(0, 0, 0));
pixels2.setPixelColor(i, pixels2.Color(0, 0, 0));
pixels.show();
pixels2.show();
}
} else {
for (int i = 0; i < NUMPIXELS; i++) {
pixels.setPixelColor(i, currentColor);
pixels2.setPixelColor(i, currentColor);
pixels.show();
pixels2.show();
delay(10);
if(digitalRead(button1Pin) != LOW){
break;
}
}
```
* Als we knop 1 indrukken zal de ledstrip de kleur van de variabele “currentColor”
krijgen en zal dan LED per LED oplichten. Zoniet, zal de ledstrip uitgaan. We
voegen een break toe, zodat de LEDs ook kunnen uitgaan tijdens dat ze 1 per 1
aangaan.

```c
if (digitalRead(button2Pin) == LOW && button2Pressed == false) {
button2Pressed = true;
color--;
if (color <= -1) {
color = 7;
}
} else {
button2Pressed = false;
}
```
* Als we knop 2 indrukken zal de kleur veranderen afhangend van de “color”
waarde. Om dit maar 1 keer tegelijk te doen, maken we gebruik van een boolean
button2Pressed.

```c
if (digitalRead(button3Pin) == LOW && button3Pressed == false) {
button3Pressed = true;
color++;
if (color >= 7) {
color = 0;
}
}
else {
button3Pressed = false;
}
```
* Zelfde als wat knop 2 doet, maar in de tegenovergestelde richting van de
kleurencyclus

## Montage Deel 1
Nu alle onderdelen al geprint zijn en we onze verstevigingsplaat hebben, kunnen we al delen
van het zwaard monteren. Zo kunnen we beter een ideale lengte inschatten voor de kabels
die door het gevest van ons zwaard loopt.
Je kan zelf kiezen met wat je begint, het blad of het gevest.

**Blad**

Voor het blad zorg je ervoor dat je 2 bijna identieke groepen hebt, 1 met een gleuf en 1
zonder. Je mag voor onderstaande stappen 1 van deze groepen nemen en een
verstevigingslat bijnemen.

![Montage1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage1.jpg)

We lijmen eerst het deel dat verbonden wordt met het gevest met het korte tussenstuk.

![Montage2]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage2.jpg)

![Montage3]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage3.jpg)

Als dit vast zit, lijmen we de 2 tussenstukken vast en daarna de top van het blad met de
tussenstukken.

![Montage4]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage4.jpg)

Daarna pakken we een verstevigingslat en lijmen we die vast tegen de binnenkant van het
blad.
Deze lat zorgt buiten voor de versteviging van het blad ook nog dat de leds een betere
overgang hebben.

Vergeet niet dat deze lat waarschijnlijk nog een folie erop heeft liggen. Je kan deze er af
halen vlak voor het lijmen van de lat

![Montage5]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage5.jpg)

Eens je klaar bent met deze stappen kan je hetzelfde doen voor de andere groep.

**Gevest**

![Montage6]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage6.jpg)
![Montage7]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage7.jpg)
![Montage8]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage8.jpg)

Voor het gevest starten we met het lijmen van het stuk waar de greep in komt en waar het
koppelstuk van het gevest in komt.

![Montage9]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage9.jpg)

![Montage10]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage10.jpg)
![Montage11]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage11.jpg)

Daarna lijmen we de vleugels in de gleuven van de zijkanten van de panneerstang en lijmen
we de zijkanten aan het kopppelstuk.

![Montage12]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage12.jpg)

Ten Slotte lijmen we deze 2 combinaties samen.

## Solderen Deel 1
Voor het solderen van dit project volgen we onderstaand schema.

![Solderen1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen1.png)

**Knoppen**

(Als het lukt om de kleine knoppen te 3D printen, moet je deze knoppen afknippen op maat
voordat je verder gaat)
We starten hiervoor met de knoppen.

![Solderen2]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen2.jpg)

Eerst moeten we van alle knoppen de beentjes plat maken. Dit kan je makkelijke met de
knijptang doen.

![Solderen3]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen3.jpg)
![Solderen4]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen4.jpg)

We lijmen dan 3 knoppen naast elkaar op de 2de balk van de onderkant van de greep.
deze komen overeen met de gaten in de bovenkant.

Knip daarna 2 beentjes van elke knop zoals getoond in de afbeelding hierboven.
Op deze manier maken we het ons gemakkelijker om de grounds aan elkaar te solderen.

![Solderen5]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen5.jpg)

Dit mag je dan ook doen met een heel klein stukje van de zwarte kabel.
(Je kan dit ook doen met een breakout breadboard, neemt dan wel extra plaats van de
greep in beslag.)

![Solderen6]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen6.jpg)

Als alle pinnen langs deze kant vast zitten, kunnen we de laatste knop afknippen tot de juiste
maat. De knop in de foto is ongeveer op de juiste maat afgeknipt.

Je kan deze maat uittesten door de ge-3D-printte knop in de bovenkant van de greep te
leggen en deze op de onderkant van de greep te leggen. Als je de knop zonder probleem
kan indrukken, is het in orde.

![Solderen7]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen7.jpg)

Deze mag je dan met 1 beentje solderen aan de andere knoppen. Dan knip je net zoals bij
de andere knoppen het beentje dat niet meer op de foto staat af..

Nu kunnen we aan het overige beentje een gekleurde kabel solderen die iets langer is dan
de greep. Deze kabels gaan uiteindelijk in de Trinket komen die helemaal onderaan in het
zwaard gaat zitten. Probeer de kabel dus niet te kort te maken.

Je kan de knoppen nu uittesten door de trinket te verbinden met een computer en de zwarte
kabel te verbinden (nog niet solderen) met 1 van de GND poorten. Dan kan je elke knop
verbinden met de RST poort (rechts onderaan). De Trinket zou moeten resetten als je de
knop indrukt, dat kan je zien doordat het rode ledje op de trinket knippert voor een aantal
secondes.

**Switch**

![Solderen8]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen8.jpg)

Het volgende dat we gaan monteren en solderen is de schakelaar. Deze mag je door het gat
in de onderkant van de greep duwen. Deze hoeft niet gelijmd te worden.

![Solderen9]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen9.jpg)

Hier mag je dan ook 2 kabels aan solderen.

**Ledstrips**

![Solderen10]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen10.jpg)
![Solderen11]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen11.jpg)

Voordat we de ledstrips kunnen solderen, moeten we de pinnen zichtbaar maken. Hiervoor
knip je het begin van de omhulsel weg en maak je de pinnen schoon.
Of je knipt 1 LED van de ledstrip af.

Voordat we de ledstrip knippen, laat ik je weten dat er op elke ledstrip een lijntje (soms ook
een schaar) staat waar je die ledstrip mag knippen)

Leg de ledstrip daarna op 1 van de helften van het blad van het zwaard en knip de ledstrip af
zodat je zoveel mogelijk leds in het blad krijgt. (Voor mij was dit 41 LEDS).

Knip dan 1 identieke ledstrip.

![Solderen12]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen12.jpg)

Nu kunnen we aan beiden ledstrips de kabels solderen.

Let op dat je soldeert aan de andere kant van waar de pijltjes naar toe wijzen.

## Montage Deel 2
**Blad**

![Montage13]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage13.jpg)

We beginnen hiervoor met Het vastlijmen van de ledstrips op de helften van het blad.

Zorg dat de LEDs naar de buitenkant van het blad gericht zijn.

![Montage14]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage14.jpg)

Hierna kan je het blad afwerken door de 2 helften tegen elkaar te lijmen.

![Montage15]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage15.jpg)

Ik raad het aan om nog eens overal waar nodig lijm toe te voegen en deze delen tegen
elkaar aan te duwen.

**Koppelstuk gevest**

![Montage16]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage16.jpg)

We kunnen nu het blad in het koppelstuk schuiven en vastlijmen.
De kabels kunnen door het gat van het koppelstuk.

![Montage17]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage17.jpg)

Nu kunnen we de gouden details vastlijmen.

![Montage18]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage18.jpg)

We halen nu de greep met de knoppen erbij. Hier kunnen de kabels onder de 2 balkjes door.

**Greep**

![Montage19]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage19.jpg)

Nu kunnen we de batterij in zijn vakje leggen en zijn deksel erop leggen en toedoen. (het
deksel is optioneel zodat de batterij vast zit)

Daarna kunnen we het koppelstuk van de knop erbij nemen en de kabels erdoor trekken.

## Solderen Deel 2

![Solderen1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen1.png)

Alle kabels lopen nu door naar de knop van het zwaard. Dit betekend dat we alle kabels
kunnen solderen op de trinket. Zoals op bovenstaande afbeelding.

**Knoppen**
Soldeer de Linkse Knop met Pin 8, de knop die we afgeknipt (enkele knop) hebben met Pin
4, de Rechtse knop met Pin 12 en de Reset Knop met RST.

**Ledstrips**
Daarna solderen we de Rode (5V) kabels van de ledstrips samen op de 5V die het dichtst bij
de USB micro poort zit (op de andere 5V Pin werken de ledstrips niet op de batterij).

Dan kunnen we de Din kabels solderen op Pin 9 en 10, de volgorde maakt hiervoor niet uit.

Eens dat alle inputs gesoldeerd zijn, kan je alles nog eens voor een laatste keer testen met
de code.

**Lipoly Backpack**

![Solderen13]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen13.jpg)

Het enigste wat nu nog te solderen valt is de Lipoly backpack. Deze komt vlak op de trinket
te liggen. (Ik heb deze eerder gesoldeerd waardoor het lastiger was om de kabels van de
knoppen te solderen)

![Solderen14]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen14.jpg)

Let op dat de backpack niet tegen de micro USB poort gedrukt mag worden. Deze kan dan
kortsluiting veroorzaken.

**Switch**

Je kan op de backpack 2 Pins zien die verbonden zijn. Snij deze verbinding kapot met een
kniptang of een breekmes en soldeer daarna de kabels van de schakelaar op deze pinnen.

Om de schakelaar te testen, kan je de batterij in de backpack duwen en de schakelaar aan
en uit zetten. Hierdoor zou de trinket en de backpack ook moeten aan en uit gaan.

## De laatste Stappen
Alles zou nu moeten werken. Als dat zo is, dan kunnen we de laatste stukken toevoegen en
het zwaard sluiten.

![Laatstestappen1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Laatstestappen1.jpg)

Pak het bovenste deel van de greep en leg de ge-3D-printe knop(pen) in het/de
overeenkomende gat(en). Leg deze op het onderste deel en schuif deze in het gevest.

Dit kan gelijmd worden, maar het is mogelijk dat de greep er door de druk al stevig in zit

![Laatstestappen2]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Laatstestappen2.jpg)

Doe nu hetzelfde met de knop.

Monteer daarna de trinket in de knop met een paar M2 boutjes en lijm de knop toe.

## Gefeliciteerd
Je hebt nu je Master Sword gemaakt. Je kan deze nog wat afwerken door een groene lint
rondom het handvat te doen en deze vast te lijmen.

Verder kan je door de reset knop (in het midden) je zwaard herprogrammeren en zelf
verschillende patronen en effecten toevoegen in de code.

<div class="border_boxmaakbib01_img" markdown="1">
## Weetjes
* **Van waar komt het zwaard?** Het legendarische zwaard "Mastersword" komt uit de game "Legends of Zelda" en heeft verschillenden namen zoals "Blade of Evil's Bane", "Sword of Legend", "Sword that Seals the Darkness", ...

* **Link met "Mastersword":**<br><br>
![linkmastersword]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/link-master-sword.png)
</div>

<div class="border_boxmaakbib03_img" markdown="1">
#### Hoe werkt het?
* **Reverse Engenering** Als we iets gaan namaken dat al bestaad noemt dit reverse engenering. Als we het zwaard willen namaken moeten we eesrt zien hoe het in elkaar zit en het originele zwaard onderzoeken. Zo kan je de verschillende stukken van het zwaard krijgen door naar het design van het zwaard te kijken en de opbouw van de verschillende stukken.

* **3D Printen** Als we het ontwerp klaar hebben mag de 3D printeren aan de slag.<br>**`Maar hoe werkt die?`**<br>
Voor de 3D Printer heb je een programma nodig die je 3D Tekening gaat opsplitsen in verschillende lagen. Dit bestand kan je 3D Printer printen door laag per laag te werken en zo lagen op elkaar gaan leggen.<br><br>
![3DPrinterlagen]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3dprinterlagen.jpeg)
</div>