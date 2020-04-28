---
layout: post
title:  "3D print een opwindbare-auto!"
featured: true
published: true
authors: [guest]
lowtech: false
midtech: true
hightech: false
DIT: true
DIY: false
CHALLENGE: false
pijler_tinkering : true
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : false
licence: CCBY-NC-SA 
categories: [ 3D-printen ]
image: assets/images/2020-04-22-3Dprint-opwindbare-auto/cover.png
tijd: 60 min
print: assets/images/2020-04-22-3Dprint-opwindbare-auto/3D-geprinte opwindbare auto.pdf  
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-04-22-3Dprint-opwindbare-auto/3D-geprinte opwindbare auto.pdf
  - name: 'STL file Gift card 1 V2' 
    file: assets/images/2020-04-22-3Dprint-opwindbare-auto/Updated gift card 1 V2.stl
  - name: 'STL file Gift card 2 V2'
    file: assets/images/2020-04-22-3Dprint-opwindbare-auto/Updated gift card 2 V2.stl
materialen: [
    PLA filament,
      ]
tools: [
    3D-printer,
    Precisie snijmes,
    Kniptang,
    Kleine hamer,
      ]
benodigdheden_opt: [
      Schuurpapier,
      Secondelijm,
      Fijne machine olie,
      ]
---
Print en assembleer een opwindbaar autotje!  

Het hoofddoel van dit projectje is om te laten zien wat er de dag van vandaag mogelijk is met 3D-printing.   

In dit projectje worden er enkele fundamentele basis mechanismen toegepast waaronder: 

* tandwielen 
* mechanische veren 
* ratel/click mechanismen
* … 

En het beste van al is dat `alles volledig 3D-printbaar` is, er zijn geen extra bijkomende onderdelen nodig zoals bv. schroeven, lagers,…

*Deze handleiding werd ontwikkeld door **Brian Brocken** voor Maakbib*.


## Benodigdheden

{% include benodigdheden.html %}

## Alvorens men begint te printen

Alvorens men de 2 kaarten gaat printen zijn er enkele cruciale instellingen en weetjes waarmee men rekening moet houden om het best mogelijke resultaat te bekomen. Als de 2 kaarten al voor je uitgeprint zijn kan je dit stuk overslaan. 

#### Waar kan ik de 3D-bestanden terugvinden?
Download de stl bestanden: 
[Gift card 1 V2]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/Updated gift card 1 V2.stl), [Gift card 2 V2]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/Updated gift card 2 V2.stl)  

We hebben de bestanden ook internatiaal beschikbaar gesteld via
[Thingiverse](https://www.thingiverse.com/thing:3308710), een site waar je veel andere mooie ontwerpen kan vinden.

#### Aandachtspunten voor een goed resultaat
De eerste laag van een print is de belangrijkste van de hele print. Zorg ervoor dat de nozzle op een gelijke hoogte van het bouwoppervlak staat en dit over het ganse bouwoppervlak (de 4  hoeken, en het midden). Als dit niet het geval is dient de machine eerst gekalibreerd te worden.
Volgende instellingen kunnen gebruikt worden om de kansen op succes zo groot mogelijk te maken:

* Rafts: No
* Brim: No
* Supports: No
* Resolution: 0.2mm layer height
* Infill: 100% (25% kan ook gebruikt worden)
* Print speed: 40mm/s
* First layer extrusion width: 115%
* Merk Filament: Esun of een ander hoog kwaliteits merk.

Hieronder kan men de handleiding terugvinden die bij de kit hoort. Alle verschillende stappen worden in detail uitgelegd. Een pdf versie van deze handleiding is beschikbaar bij de downloads

## Handleiding
Een overzicht van de stappen voor assemblage  

![assemblage overzicht]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/2.png) 
#### Stap 1
![stap 1]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/stap1.png) 

De eerste stap bestaat erin om alle onderdelen los te maken van de “lopers” (verbindingen tussen de onderdelen). De beste manier hiervoor is om eerst alle onderdelen los te knippen met een kniptang en vervolgens de restanten van de lopers te verwijderen met een fijn precisie snijmes. 

**OPGELET** Om een goede werking van het autootje te garanderen is het zeer belangrijk dat alle onderdelen zo proper mogelijk gemaakt worden en dat eventueel overtollige plastic verwijderd wordt. Hierop dient vooral gelet te worden bij de tandwielen.


#### Stap 2
![stap 1]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/stap2.png) 

In deze stap worden enkele onderdelen gemonteerd op het linker frame van het autootje (verschil met het rechterframe is te zien aan de rechthoekige en ronde gaten)  zoals de veer, voor-en achterassen, de frame verbindingsstukken en het kleine tandwiel met rondel. Het autootje bevat in totaal 4 rondellen, welke waar gebruikt moet worden is te zien aan het aantal bultjes op de omtrek van de rondel (1 tot 4).

De plaats van elke rondel is aangeduid in de foto.

<div class="border_boxmaakbib01_img" markdown="1">
#### Weetje

In het ontwerp van het autootje zijn enkele 3D-print trucjes gebruikt om te compenseren voor de verschillende toleranties waarmee verschillende 3D-printers printen. Zo bevatten de ronde gaten in het frame elk 2 kleine veertjes en bevat de veer een gleuf, dit om goed rond de assen aan te sluiten.
</div>

#### Stap 3
![stap 1]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/stap3.png)

In de derde stap worden de 3 tandwielen met hun rondellen op hun assen geschoven. Merk op dat 2 tandwielen exact hetzelfde zijn en dat het andere tandwiel aangepast is om een ratel/click mechanisme in te passen. De aandrijfas (die gebruikt wordt om het autootje op te winden) wordt door het rechterframe, de ratel, het tandwiel, de rondel en de veer geschoven tot in het rechterframe.   Het rechterframe kan nu op zijn plaats geklikt worden.

**OPGELET** Let bij deze stap goed op welke rondel waar gebruikt wordt voor u begint. Dit om te vermijden dat het autootje terug uit elkaar gehaald moet worden aangezien dit meestal fataal kan aflopen voor het autootje.

#### Stap 4 
![stap 1]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/stap4.png)

In de vierde en laatste stap worden de voor-en achterwielen gemonteerd. Merk hierbij op dat deze verschillende groottes hebben en dat de kleine wielen vooraan gemonteerd worden (Voorkant is links onderaan op bovenstaande foto) en de grotere wielen achteraan gemonteerd worden.

**Tip** Leg het wieltje aan de rand van een tafel (zo zit de aandrijfas niet in de weg) en klop de assen voorzichtig in de wieltjes met een kleine hamer.

<div class="border_boxmaakbib01_img" markdown="1">
#### Wist je dat ...
In 1978 maakte een Japans bedrijf genaamd Takara de beroemdste opwindbare auto ter wereld.   

![stap 1]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/coroQ.jpg)  

De **Choro-Q**, in de Verenigde Staten 'Penny Racers' genoemd, bestond uit geperste afbeeldingen van een echte auto. Het had ook een terugtrekmotor met schroefveren. Deze auto's werden al snel verzamelobjecten vanwege hun lage prijs en beschikbaarheid van speciale editie-modellen. 

</div>

#### Proficiat & Tips voor soepele werking.
Proficiat, je bent nu in het bezit van een autootje dat volledig uitgeprint is. Het autootje zou normaal gezien volledig moeten werken vanaf dat deze in elkaar gestoken is. 

De resultaten hangen natuurlijk af van de printkwaliteit van de gebruikte 3D-printer. Het kan dus best mogelijk zijn dat het autootje nog niet zo soepel draait. Daarom nog enkele **tips** om de kansen op succes zo hoog mogelijk te maken.

 * Zorg ervoor dat de 2 frames niet tegen de tandwielen gedrukt zijn en dat de tandwielen vrij kunnen ronddraaien
 * Kijk na of er geen overtollige plastic aanwezig is tussen de beweegbare onderdelen
 * Gebruik fijne machine olie om alle bewegende onderdelen te smeren
 * Gebruikt secondelijm in het geval dat bepaalde onderdelen niet vast willen blijven zitten zoals bv: de 2 frames en verbindingsstukken en de wielen op de assen

![stap 1]({{ site.baseurl }}/assets/images/2020-04-22-3Dprint-opwindbare-auto/einde.png)

<div class="border_boxmaakbib01_img" markdown="1">
#### Weetje
Hoewel dit autootje volledig ontworpen is met het oog op 3D-printing valt het op dat we gewerkt hebben met zogenaamde __*lopers*__, zie stap 1. 

Dit hoeft hier niet, het zorgt enkel voor een mooie kit. Normaal zijn zo'n lopers te zien bij onderdelen die met een spuitgietmachine gemaakt worden. Hierbij vult plastiek een mal, en _moeten_ alle elementen verbonden zijn met elkaar zodat het plastiek er kan geraken.

Denk hierbij maar aan de traditionele plastiek modelbouwkits. Dit was dan ook de reden dat wij ook de “lopers” verwerkt hebben in het ontwerp, om het gevoel van een heuse modelbouwkit te krijgen. Dit samen met de handleiding die op gelijkaardige manier opgebouwd is als die van een modelbouwkit. Maar weet, voor een 3D printer is dit niet nodig, zelfs overbodig! 

</div>


## STEM
In deze mid tech activiteit komt heel wat STEM (Science Technologie Engineering Mathematics) aan bod! Volgende talenten heb je bij de bouw nodig: planmatig werken, nauwkeurig werken, logisch nadenken. 
En als je de werking gaat onderzoeken ontdek je heel wat natuurkunde. 

<div class="border_boxmaakbib02_img" markdown="1">
#### Opwindbare autotjes en natuurkunde
De opwindbare auto heeft een metalen of plastic buitenschaal waarin een chassis met een systeem van tandwielen, assen en wielen is ondergebracht. De as en achterwielen zijn bevestigd aan de tandwielen, die met de veer verbonden zijn. Wanneer de gebruiker de wielen draait, windt de as de veer op, waardoor energie opgeslagen wordt die dan omgezet wordt in beweging.  

Een mooie uitleg is te zien [op deze video](https://youtu.be/QdvfiVebb_s?t=23)

Het is belangrijk om het verschil tussen **snelheid** en **acceleratie/versnelling** te begrijpen, bij het werken met opwindbare autotjes. 

Een object versnelt wanneer zijn snelheid verandert, maar er wordt ook rekening gehouden met de richting. Versnelling is wanneer de bewegingsrichting, snelheid of beide van een object veranderen. Een object kan versnellen als het met een veranderende snelheid in een rechte lijn beweegt of als het in een cirkel beweegt met een variabele of constante snelheid.

Als je je ogen sluit terwijl je met een constante snelheid beweegt, kun je niet eens zien dat je in beweging bent. Dit is de reden waarom ontwerpers van amusementritten nooit ritten zouden maken die met constante snelheid bewegen. Je voelt de versnelling van kermisattracties, vooral bij ritten op achtbanen en schommels. Voor degenen die van deze ritten houden, hoe sneller de snelheid en richting veranderen, hoe beter. 

Versnelling vindt plaats door de werking van een  kracht op een object. Dit valt onder de tweede bewegingswet van Newton, waarin staat dat versnelling in directe verhouding staat tot de kracht. De versnelling is omgekeerd evenredig met de massa van het object. Dit is logisch als je nadenkt over de massa van auto's en de kracht van hun motoren. 
Twee auto's met dezelfde massa accelereren niet hetzelfde als ze verschillende motoren hebben. 

#### Experimenteer

Ontdek hoe massa en versnelling met elkaar in verband staan. 

Plaats kleine voorwerpen op de voorkant van de auto en observeer hoe de auto beweegt bij verschillende gewichten startend met hetzelfde aantal opwindingen.  
</div>


## Maak het je eigen. 
Kan je een manier bedenken om met eenvoudige recyclage materialen een autotje te maken die beweegt volgens gelijkaardige principes? 

Ooit een `rubber-band car` gemaakt? Zoek het op!




