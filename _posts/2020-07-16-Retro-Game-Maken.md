---
layout: post
title:  "Retro Game Maken"
featured: false
published: false
authors: [guest]
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