---
layout: post
title:  "Retro Game Maken"
featured: false
published: false
authors: [ben]
author_name: ""
lowtech: false
midtech: true
hightech: false
DIT: true
DIY: true
CHALLENGE: false
moeilijkheidsgraad_1_3: 2
prijs_1_3: 1
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : false
pijler_physical_computing : true
licence: CCBY-NC-SA
categories: [physical computing]
image: assets/images/2020-07-16-Retro-Game-Maken/main.png
tijd: 3u+
print: assets/images/2020-07-16-Retro-Game-Maken/Handleiding_RetroGaming_ArduinoNano.docx.pdf   
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-07-16-Retro-Game-Maken/Handleiding_RetroGaming_ArduinoNano.docx.pdf
  - name: 'Etch a Sketch code'
    file: https://github.com/ingegno/RetroGames/tree/master/ArduinoEtchAsketch
---

Leer hoe je je eigen game programmeerd voor jou zelf gemaakte game console! Hier leer je werken met blokkencode en uiteindelijk hoe je een game maakt (Etch a Sketch).

## Benodigdheden

<p style="margin: 0 0 0 0;"><strong>Materialen:</strong></p>
<div class="benodigdheden">
  <ul>
    <li><a href="#">Retro Game Console!</a></li>
 </ul>
</div>

![gameconsole]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/main.jpg)

{% include benodigdheden.html %}

## Deel 1: Blokkencode
Om te beginnen ga je naar <a href="http://blokkencode.ingegno.be" target="_blanc">blokkencode.ingegno.be</a>. Dit is een website waar we met blokken code kunnen schrijven voor de arduino. Als je blokkencode af is kan je de code bij ``Arduino Source Code`` copieëren en in je Arduino IDE zetten.

**Hoe werken de blokken?**

Je kan verschillende soorten blokken kiezen bij het menutje ``Blokken``. Hier vind je verschillende categorieën, bv. onder de categorie tijd zullen al de blokken staan die te maken hebben met tijd: 

![gamemaken1]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken1.png)

De blokken kan je dan allemaal aan een steken om een logische code te ontwikkelen. Je kan al de blokken vastnemen en naar de juiste plaats slepen. Als de blok in die plaats past gaat die vanzelf 'vastklikken'.

![gamemaken2]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken2.png)

**Hoe maak je een logische blokkencode?**

Om een code te ontwikkelen begin je altijd met het declareren van je variabelen. Dat betekend dus dat je de Arduino gaat vertellen wat je allemaal gaat gebruiken en aan welke pin die componenten vast zitten.

![gamemaken3]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken3.png)

* Bij onze Retro Game Console zitten de pinnen zoals hierboven geconfigureerd.

Als je een blok heb met een settings icoontje betekend dat dat je de blok kan aanpassen. Bij het 'Platform' blokje kan je dus kiezen wat voor pin je wilt toevoegen.

![gamemaken4]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken4.png)

* De Joystick X en Y pinnen zijn analoge pinnen, maar de knoppen zijn digitale pinnen.

Nu dat je dat klaar hebt heb je de ``Arduino doe eerst: / Arduino herhaal voor altijd:`` blok nodig. In de ``Àrduino doe eerst`` scope ga je blokken zetten die maar 1 keer zullen uitgevoerd worden, in het begin. In de ``Arduino herhaal voor altijd`` scope ga je blokken zetten die blijven herhalen, als de laatste blok werd uitgevoerd begint de Arduino weer aan de eerst.

![gamemaken5]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken5.png)

* Als de Arduino opstart gaat het scherm voor 3 seconden vast op rood staan. Maar als je daarna op de knop drukt die op pin 1 is aangesloten zal het scherm wit worden voor 1 seconde en dan zwart worden.

## Deel 2: Etch a Sketch maken
Als voorbeeld game gaan we Etch a Sketch maken. In deze game kan je met de joystick lijnen tekenen. Als je op de B knop (rechts) drukt zal je de kleur van je lijn aanpassen en als je op de A knop (links) drukt zal de kleur van de achtergrond resetten. Zo kan je dus tekeningen maken met je Retro Game Console! Er zal stap voor stap worden uitgelegd hoe je aan de blokkencode komt.

![gamemaken6]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken6.jpg)
![gamemaken7]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken7.jpg)

**Setup**

![gamemaken8]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken8.png)

* Hier declareren we de pinnen aan de juiste componenten, we geven ook mee dat we een Arduino Nano gebruiken en een TFT-Scherm.

**Doe eerst en herhaal altijd**

We begin met ons startscherm en dat gaan we doen door een funtie te maken.

![gamemaken9]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken9.png)
![gamemaken10]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken10.png)

* Opdrachten blokje vind je onder 'Functies'.

**Code voor de opdracht startscherm**

Nu maken we de blokken voor het startscherm en hoe we het spel gaan starten. We zorgen ervoor dat het spel opstart met een startscherm en dat je kan doorgaan met de eerste knop.

![gamemaken11]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken11.png)

* We maken de achterground kleur grijs en zorgen ervoor dat de worden "Retro" en "Games" op het scherm komen. Daarna maken we ook een sprite aan om op het scherm te laten verschijnen die aantoont welke game we maken.
* Op het einde van deze opdracht zorgen we er voor dat we met knop A het scherm laten resetten zodat we kunnen tekenen.
* Getal blokje vind je onder 'Wiskunde'.

**Doe eerste en herhaal altijd 2**

Nu gaan we de 2de functie maken in `Doe eerst`.

![gamemaken12]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken12.png)

**Code voor de opdracht start_dot**

De blokken die we nu gaan maken is om de tekening te beginnen. We maken een punt van 2 op 2.

![gamemaken13]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken13.png)

* We tekenen een puntje in het midden van het scherm.
* XPos, YPos en kleurdot zijn nieuwe variabelen die je kan aanmaken bij het pijltje.
* Stel blokje vind je onder 'Variabelen'.

**Herhaal voor altijd**

Nu zijn we klaar met de doe eerst funtcie dus beginnen we aan de herhaal altijd loop. We starten de loop met een effect `doe_een_stap`.

![gamemaken14]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken14.png)

* We gaan een stap maar laten doen om de 50ms zodat de stappen niet te snel gaan.
* Effect blokje vind je onder 'Functies'.

**Code voor het effect doe_een_stap**

In dit effect blokje gaan we een opdracht maken `lees_joystick_wandel`.

![gamemaken15]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken15.png)

* In deze opdracht gaan we de code schrijven om te kunnen tekenen in de richting van de joystick.
* Hiervoor gaan we ook een kleur gebruiken die we kiezen met knop A.

**Code voor de opdracht lees_joystick_wandel**

Hier maken we de blokken om te kunnen tekenen. De code leest waar de joystick staat en geeft de X en Y richting mee om te kunnen tekenen.

![gamemaken16]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken16.png)

* De nieuwe variabelen hebben we tijdelijk nodig voor de richting.

Onder de vorige blokken beginnen we met de code voor te corrigeren zodat we het scherm niet verlaten.

![gamemaken17]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken17.png)

* Als we aan de rand staan kunnen we dus niet verder.

De laatste blokken in de opdracht zijn er om de kleur mee te geven. De kleur kiezen we door de knop A en die blokken maken we hierna.

![gamemaken18]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken18.png)

* Kleurdot gaan we straks tot 9 laten gaan dus je kan nog kleuren toevoegen!

**Herhaal voor altijd 2**

Nu gaan we aan de laatste stappen beginnen. Kleurdot veranderen met knop A en de achtergrond veranderen door een opdracht met knop B.

![gamemaken19]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken19.png)

* Kleurdot gebruiken we in de lees_joystick_wandel opdracht voor de kleuren.
* De opdracht wijzig_achtergrond gaat gebruik maken van het getal dat we tot 9 laten gaan om de achtergrondkleur te laten veranderen.

**Code voor de opdracgt wijzig_achtergrond**

Met het getal gaan we de kleur kiezen door de knop B. De achtergrond kleur zal veranderen maar alles wat je daarvoor tekende gaat ook weg.

![gamemaken20]({{ site.baseurl }}/assets/images/2020-07-16-Retro-Game-Maken/gamemaken20.png)

* We laten het getal tot 9 gaan dus je kan nog kleuren toevoegen voor de achtergrond.

**Klaar!**<br>
Nu kan je de code kopiëren die in de rechterkolom staat onder "Arduino Source Code" en plakken in een **lege** schets in je Arduino IDE. Druk op de upload knop om het op je console te plaatsen, en test je joystick en het scherm zo. 

Werkt jou code niet? De blokken op <a href="https://blokkencode.ingegno.be" target="_blanc">blokkencode.ingegno.be</a> kun je opslaan als een `xml` file (via knop rechtsboven), en zo delen met anderen. Onze test xml files vind je bij <a href="https://github.com/ingegno/RetroGames/tree/master/voorbeelden" target="_blanc">de voorbeelden in de repo</a>. Je kan ze downloaden en opladen in <a href="https://blokkencode.ingegno.be" target="_blanc">blokkencode.ingegno.be</a> via de knop rechtsboven.

