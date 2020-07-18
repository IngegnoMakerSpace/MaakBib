---
layout: post
title:  "Mastersword"
featured: false
published: true
authors: [guest]
author_name: "Steven van Durm"
lowtech: false
midtech: false
hightech: true
DIT: true
DIY: false
CHALLENGE: false
moeilijkheidsgraad_1_3: 3
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
      Kruis schroevendraaier,
      KnipTang,
      Knijptang,
      Strip tang
      ]
---

Maak het legendarische “Master Sword” uit “The legend of Zelda” na door middel van 3D-printing, lasercutting en arduino. 
Kennis van programmeren is niet vereist, 
maar het is wel aangeraden als je aanpassingen wilt maken.

*Deze handleiding werd ontwikkeld door **Steven van Durm** voor Maakbib.*

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
    <li><a href="https://www.adafruit.com/product/1490">Lange drukknoppen</a></li>
    <li><a href="https://www.gotron.be/bout-m2-lengte-4mm-100-stuks-metaalschroef-met-cilindrische-kop.html">M2 boutjes</a></li>
    <li>Plaat Acrylic (3mm dik)</li>
    <li>Micro-USB Kabel die data kan overzetten</li>
 </ul>

</div>

{% include benodigdheden.html %}

## 3D-Printing
We gaan ervan uit dat je reeds succesvol kan 3D printen en dat je de instellingen voor jouw toestel kent. Anders kan je voor de komende stappen terecht bij je lokale Fablab/Maker Space of MaakBib. Zij helpen je ook om te starten met 3D printing.

Omdat we het wiel niet opnieuw moeten uitvinden, vertrekken we van een bestaand model dat gedeeltelijk aangepast wordt zodat de elektronica erin past.
De aangepaste bestanden voor dit project kan je hier afhalen:<br>
<a href="https://www.thingiverse.com/thing:4414570">https://www.thingiverse.com/thing:4414570</a>

| Toppen van het blad (1x met gleuf, 1x zonder)<br>Kleur: Wit | ![3DPrinten1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto1.png) |
| tussenstukken van het blad (1x met gleuf, 1x zonder)<br>Kleur: Wit | ![3DPrinten2]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto2.png) |
| Onderste deel van het blad (2x)<br>Kleur: Wit | ![3DPrinten3]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto3.png) |
| Guard (2x)<br>Kleur: Goud | ![3DPrinten4]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto4.png) |
| Diamond (2x)<br>Kleur: Goud | ![3DPrinten5]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto5.png) |
| Koppelstuk gevest<br>Kleur: Eigen keuze | ![3DPrinten6]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto6.png) |
| Pareerstang deel (2x)<br>Kleur: Eigen keuze | ![3DPrinten7]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3DFoto7.png) |
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


Het originele ontwerp voor het gevest van het zwaard kan je hier <a href="https://www.thingiverse.com/thing:2886473">afhalen</a>.

Inspiratie voor de elektronica vind je hier: <br>
<a href="https://www.thingiverse.com/thing:2526427">https://www.thingiverse.com/thing:2526427</a>

## Lasercutting
Via lasercutten maken we een versteviging van het blad van het zwaard, zodat deze minder snel kan breken.
Hiervoor kan je terecht bij je lokale Fablab.

Je snijdt uit een acrlyic plaat van 3mm dikte een vorm bestaande uit een  rechthoek van 25mm x 85mm verenigd met een rechthoek van 37mmx 538mm. Klik op de figuur om de svg file te downloaden 

[![Lasercutting1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Lasercutting1.png)
]({{ site.baseurl }} /assets/downloads/2020-07-13-Mastersword/blad.svg).

## Programmeren
Voor het programmeer gedeelte moeten enkele bestanden en pakketten afgehaald en geïnstalleerd worden. Daarna kan je programmeren. 
#### Klaarmaken
Begin met Arduino en de Adafruit packages.

De Arduino IDE kun je downloaden van:<br>
<a href="https://www.arduino.cc/en/Main/Software">https://www.arduino.cc/en/Main/Software</a>

Adafruit trinket support voeg je toe via de handleiding (werkt ook in recentere versies van de Arduino IDE):<br>
<a href="https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide">https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide</a>  
Je dient dus `https://adafruit.github.io/arduino-board-index/package_adafruit_index.json` toe te voegen als board manager URL, en via de board manager dan **Adafruit AVR Boards** installeren. Daarna installeer je ook nog de drivers indien dit niet automatisch gebeurt na koppelen van de trinket met je PC via usb kabel.

Om onder windows bestanden te kunnen uploaden naar de trinket, moet men een bootloader installeren en enkele instellingen
wijzigen onder de tab “Hulpmiddellen”. Hoe dit moet wordt aangegeven in de volgende handleidingen. 

**`Let op!`** We maken gebruik van USB en niet FTDI, let hiervoor op tijdens de tutorial van adafruit en
voor de instellingen.

* Tutorial pro-trinket gebruiken: 
<a href="https://learn.adafruit.com/introducing-pro-trinket">https://learn.adafruit.com/introducing-pro-trinket</a>
* Tutorial Neopixel library installeren en gebruiken: 
<a href="https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation">https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation</a>

#### Arduino Code
Hieronder vind je de code terug van het project. Deze kan je kopieren en plakken in een **lege** sketch in de Arduino IDE. 
Je mag deze code uploaden naar de trinket.

Voor diegene die geïnteresseerd zijn, wordt de code hieronder toegelicht. Zoniet, mag je naar **Montage Deel 1** gaan.

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
* Aanmaken van de variabelen van de pinnen van de knoppen en toestand van de knoppen.

```c
int color = 0;
uint32_t currentColor = pixels.Color(0, 0, 255);
```
* Aanmaken van de variabelen voor de kleur van de ledstrip. (color = nummer in
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
voegen een break toe, zodat de LEDs ook kunnen uitgaan terwijl ze 1 per 1
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
waarde. Om de drukknop maar een keer te detecteren na indrukken maken we gebruik van een boolean button2Pressed.

```c
if (digitalRead(button3Pin) == LOW && button3Pressed == false) {
    button3Pressed = true;
    color++;
    if (color >= 7) {
        color = 0;
    }
} else {
    button3Pressed = false;
}
```
* Zelfde als wat knop 2 doet, maar in de tegenovergestelde richting van de
kleurencyclus

## Montage Deel 1
Als alle onderdelen geprint zijn en de verstevigingsplaat gesneden is, kan men het zwaard monteren. 
Alle stukken klaar hebben is nodig om de lengte van de kabels correct te kunnen inschatten. 
Je kiest zelf wat je begint te monteren: het blad of het gevest.

#### Blad

Voor het blad zorg je ervoor dat je 2 bijna identieke groepen hebt, 1 met een gleuf en 1
zonder. Je mag voor onderstaande stappen 1 van deze groepen nemen en een
verstevigingslat bijnemen.

![Montage1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage1.jpg)

We lijmen eerst het deel dat verbonden wordt met het gevest met het korte tussenstuk.

![Montage2]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage2.jpg)

![Montage3]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage3.jpg)

Als dit vast zit, lijmen we de 2 tussenstukken vast en daarna de top van het blad met de
tussenstukken.

Vergeet niet om de mogelijk beschermfolie te verwijderen van de lat voor je gaat lijmen
![Montage4]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage4.jpg)

Lijm de verstevigingslat vast tegen de binnenkant van het
blad.
Deze lat zorgt niet enkel voor versteviging maar ook voor een betere overgang van de leds. 


![Montage5]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage5.jpg)

Eens je klaar bent met deze stappen kan je hetzelfde doen voor de andere groep.

#### Gevest

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
Vold het onderstaande schema voor het solderen van de componenten. En lees verder om te weten waar wat geplaatst moet worden. 

![Solderen1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen1.png)

**Knoppen**
Start met de knoppen.

(Als het gelukt is om de kleine knoppen te 3D printen, moet je deze knoppen afknippen op maat
voordat je verder gaat)

![Solderen2]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen2.jpg)

Maak alle beentjes van alle knoppen plat. Dit kan makkelijke met een
knijptang.

![Solderen3]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen3.png)
![Solderen4]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen4.jpg)

Lijm de 3 knoppen naast elkaar op de 2de balk van de onderkant van de greep. Deze komen overeen met de gaten in de bovenkant.

Knip daarna 2 beentjes van elke knop zoals getoond in de afbeelding.
en soldeer de `grounds` aan elkaar. Dit kan met een klein stukje zwarte kabel.

![Solderen5]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen5.png)

![Solderen6]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen6.png)

Als alle pinnen vast zitten, kunnen we de laatste knop afknippen tot de juiste hoogte en plaatsen. 

![Solderen7]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen7.png)

Je kan de hoogte uittesten door de 3D-geprinte knop in de bovenkant van de greep te leggen en deze op de onderkant van de greep te leggen. Als je de knop zonder probleem
kan indrukken, is het in orde.

Deze laatste knop soldeer je met 1 beentje aan de andere knoppen. Dan knip je net zoals bij de andere knoppen het beentje dat niet meer op de foto staat af.

Soldeer nu een gekleurde kabel aan het overige beentje, zorg dat deze  langer is dan
de greep. Deze kabels gaan uiteindelijk in de Trinket komen die helemaal onderaan in het
zwaard gaat zitten. Dus, lang genoeg maken! 

**`Test de knoppen uit!`**
Verbind de trinket met een computer en de zwarte kabel (nog niet solderen) met 1 van de GND poorten. Verbind elke knop met de RST poort (rechts onderaan). De Trinket zou moeten resetten als je de
knop indrukt, dat kan je zien doordat het rode ledje op de trinket knippert voor een aantal
secondes.

**Switch**

![Solderen8]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen8.jpg)

Het volgende dat we gaan monteren en solderen is de schakelaar. Deze mag je door het gat
in de onderkant van de greep duwen. Deze hoeft niet gelijmd te worden.

![Solderen9]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen9.png)

Hier mag je dan ook 2 kabels aan solderen.

**Ledstrips**

![Solderen10]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen10.jpg)
![Solderen11]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen11.jpg)

Voordat we de ledstrips kunnen solderen, moeten we de pinnen zichtbaar maken. Hiervoor
knip je het begin van de omhulsel weg en maak je de pinnen schoon.
Of je knipt 1 LED van de ledstrip af.

**Let op!** Voor je knipt, kijk waar de aanduiding, lijntje of schaartje, staat om te knippen.

Leg de ledstrip daarna op 1 van de helften van het blad van het zwaard en knip de ledstrip af
zodat je zoveel mogelijk leds in het blad krijgt. 
In ons voorbeeld was dit aantal 41 LEDS. Dit aantal kan varieren afhankelijk van de aangekochte ledstrip. 

Knip dan nog 1 identieke ledstrip.

![Solderen12]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen12.jpg)

Soldeer aan beide ledstrips de kabels om de connecies te maken met de trinket. 

Let op dat je soldeert aan de **andere** kant van waar de pijltjes naar toe wijzen, gezien dat de **input** zijde is van de LED-strip. De richting van het pijltje is van input naar output.

## Montage Deel 2
**Blad**

![Montage13]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage13.jpg)

Lijm de ledstrips vast op de helften van het blad.

Zorg dat de LEDs naar de buitenkant van het blad gericht zijn.

![Montage14]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage14.jpg)

Hierna kan je het blad afwerken door de 2 helften tegen elkaar te lijmen.

![Montage15]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage15.jpg)

Het is aangeraden om nog eens overal waar nodig lijm toe te voegen en deze delen tegen elkaar te duwen.

**Koppelstuk gevest**

![Montage16]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage16.jpg)

We kunnen nu het blad in het koppelstuk schuiven en vastlijmen.
De kabels kunnen door het gat van het koppelstuk.

![Montage17]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage17.jpg)

Lijm dan de gouden details vast. 

![Montage18]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage18.png)

Haal de greep met de knoppen erbij, trek de kabels onder de 2 balkjes door.

**Greep**

![Montage19]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/montage19.jpg)

Plaats de batterij in zijn vakje en plaats zijn deksel erop. 
(Het dekseltje voor de batterij is optioneel zodat de batterij vast zit)

Daarna kunnen we het koppelstuk van de knop erbij nemen en de kabels erdoor trekken.

## Solderen Deel 2

![Solderen1]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen1.png)

Alle kabels lopen nu door naar de kop van het zwaard en kunnen gesoldeerd worden op de trinket, zoals in de afbeelding.

**Knoppen**
Soldeer de Linkse Knop met Pin 8, de knop die we afgeknipt (enkele knop) hebben met Pin
4, de Rechtse knop met Pin 12 en de Reset Knop met RST.

**Ledstrips**
Soldeer de Rode (5V) kabels van de ledstrips samen op de 5V die het dichtst bij
de USB micro poort zit. 

**`Let op!`**  De ledstrips werken niet op de batterij als je de andere 5V Pin gebruikt. 

Soldeer de **Din** kabels op **Pin 9** en **10**, de volgorde maakt niet uit.

Als alles gesoldeerd is, test met de code.

**Lipoly Backpack**

![Solderen13]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen13.jpg)

Als laatste, soldeer de Lipoly backpack op de Trinket. Deze komt vlak op de trinket te liggen, connectie via de BAT, G en 5V waar je draad of een connectie pin voor gebruikt.

![Solderen14]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen14.png)

**`Let op!`** de backpack mag niet tegen de micro USB poort gedrukt worden. Dat kan kortsluiting veroorzaken, zorg dus dat er plaats tussen de twee is na solderen.

**Switch**

Je kan op de backpack 2 Pins zien die verbonden zijn.  
![Solderen14b]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/Solderen14b.png)  
Deze pinnen laten toe een schakelaar te gebruiken. Snij deze verbinding **aan het oppervlak** kapot met een
kniptang of een breekmes en soldeer daarna de kabels van de schakelaar op deze pinnen. Zie de uitleg [op de Adafruit site voor meer info](https://learn.adafruit.com/adafruit-pro-trinket-lipoly-slash-liion-backpack/pinouts#optional-switch-1942369-6)

Om de schakelaar te testen, kan je de batterij in [de header op de backpack duwen](https://learn.adafruit.com/assets/19686) en de schakelaar aan en uit zetten. Hierdoor zou de trinket en de backpack ook moeten aan en uit gaan.

**`OPGELET`**: Gebruik enkel LiPo batterijen die geschikt zijn voor de Trinket battery backpack! 

## De laatste Stappen
Als alles getest en werkend is, kunnen we de laatste stukken toevoegen en het zwaard sluiten.

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
#### Van waar komt het zwaard?

![linkmastersword]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/link-master-sword.png)  
Het Meesterzwaard (of Master Sword) is een van de meeste iconische elementen van de computerspelserie **Legends of Zelda**. In vele games in de serie is het zelfs het focuspunt van het verhaal. 

Het legendarische spel (in het Japans: ゼルダの伝説 Zeruda no Densetsu, letterlijk vertaald: De Legende van Zelda) werd bedacht door Shigeru Miyamoto, waarvan de eerste game in 1986 voor het Japanse Famicom Disk System uitkwam. 

#### De namen van het zwaard?

Het zwaard staat bekend onder  verschillenden namen zoals "Blade of Evil's Bane", "Sword of Legend", "Sword that Seals the Darkness", ...

#### Princes Zelda

Princes Zelda is een van de drie belangrijkste personages uit de serie. Elke incarnatie van de prinses wordt door het lot gekozen om de bewaarder van de *Triforce of Wisdom* te zijn. In de hele serie heeft Princess Zelda verschillende krachten van magische tot fysieke, variërend van het hanteren van pijl en boog tot telepathie. 

</div>
## STEM
In deze high tech activiteit komen heel wat technieken aan bod! 
Je wordt uitgedaagd met 3D-printen, solderen, programmeren en laser snijden. Als je aan talenten training doet, ga je je vooral op **nauwkeurigheid** moeten concentreren. 

<div class="border_boxmaakbib03_img" markdown="1">
#### Hoe hebben we dit gemaakt?
* Ooit gehoord van **Reverse Engenering**?  Dit is een volledig domein binnen de ingenieurswetenschappen en dekt onder andere de technieken die nodig zijn om voorwerpen na te maken. 

* Als we het zwaard willen namaken moeten we eerst zien hoe het in elkaar zit en het originele zwaard onderzoeken. Zo kan je de verschillende stukken van het zwaard natekenen in 3D, bv in software zoals [Blender](https://www.blender.org/). 

*  Als we het ontwerp klaar hebben mag de 3D printer aan de slag.

#### Hoe werkt 3D-printen?

![3DPrinterlagen]({{ site.baseurl }} /assets/images/2020-07-13-Mastersword/3dprinterlagen.jpeg)

Neem een kijkje <a href="https://maakbib.be/wistjedat/2020-01-20-DYK-3D-printen/">hier</a>

</div>