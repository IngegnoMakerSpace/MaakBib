---
layout: post
title:  "Giet je eigen zeepjes"
featured: false
published: false
authors: [guest]
author_name: "Gertjan Ameryckx"
lowtech: false
midtech: true
hightech: false
DIT: true
DIY: true
CHALLENGE: false
moeilijkheidsgraad_1_3: 2
prijs_1_3: 3
pijler_tinkering : true
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : false
licence: CCBY-NC-SA 
categories: [ 3D-printen ]
image: assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG51.png
tijd: 2 dagen
print: assets/images/2020_07-13-3DPrint_Zeepjes/Zeepjes maken.pdf  
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020_07-13-3DPrint_Zeepjes/Zeepjes maken.pdf
materialen_dontshow: true
materialen: [
    PLA filament, 
    Schroefjes M3x8/Secondelijm, 
    Maatbeker 0.75l,
    Sicovoss NL A+B silicone 0.5l,
    Glycerine- en zweetvrije zeep,
    Cosmetische kleurstof op waterbasis,
    Geurstof
      ]
tools: [
    3D-printer,
    Computer,
    Boormachine met 2mm boor,
    Kookvuur,
    Grote en kleine kom,
    Lepels,
      ]
benodigdheden_opt: [
      Schuurpapier,
      ]
---
Ontwerp en giet je eigen zeepjes!  

In dit project wordt uitgelegd hoe je zelf gepersonalisserde zeepje kan maken. 
We starten met het 3D-printen van een door de maker ontworpen vorm. Vanuit deze vorm gaan we over tot het maken van een siliconemal. Eens de siliconemallen klaar zijn, kan er overgegaan worden naar het maken van de zeepjes. Het smelten en het toevoegen van geuradditieven en kleurstoffen. Eens de zeep voldoende vloeibaar is, wordt overgegaan tot het gieten in de siliconemallen.

*Deze handleiding werd ontwikkeld door **Gertjan Ameryckx** voor Maakbib*.


## Benodigdheden

<p style="margin: 0 0 0 0;"><strong>Materialen:</strong></p>

<div class="benodigdheden">
  <ul>
    <li>PLA filament</li>
    <li>Schroefjes M3x8/Secondelijm</li>
    <li><a href="https://www.vosschemie-benelux.com/nl/product/gereedschappen-maatcylinder-multimix-beker-0-75-l">Maatbeker 0.75l</a></li>
    <li><a href="https://www.vosschemie-benelux.com/nl/product/silicone-rubber-sicovoss-v-sure-silicone-nl-a-b-set-0-5-kg">Silicone vormrubber</a></li>
    <li><a href="https://www.online-zeepwinkel.nl/a-27854142-3922197/250g-500g-1-kg-verpakking/glycerinezeep-gietzeep-wit-zweetvrij-crystal-wls-ggb02/#description">Glycerine- en zweetvrije zeep</a></li>
    <li><a href="https://www.online-zeepwinkel.nl/a-22886820/water-oplosbare-kleurstof/cosmetische-kleurstof-waterbasis-rood-donker-kcw08/#description">Kleurstof</a></li>
    <li><a href="https://www.ava.be/nl/product/search?keyword=geur+rayher">Geurstof</a></li>
 </ul>

</div>

{% include benodigdheden.html %}


## Project Overzicht

We kunnen dit project opdelen in drie fasen. 
We beginnen in fase A met een ontwerp te maken van de mal voor de zeepjes. 
Vervolgens vormen we in fase B de 3D-geprinte mal om naar een siliconemal.
Tenslotte in fase C smelten en gieten we de zeep in de silionemal.

We werken in deze handleiding met een vogeltje als voorbeeld, maar je mag zelf natuurlijk je eigen vorm kiezen.

## Fase A: Ontwerp je 3D-geprinte mal
In deze fase gaan we ervan uit dat je reeds ervaring hebt met een tekenprogramma naar keuze. Hier focussen we op de nodige regeltjes om een goede mal te bekomen.

Na de eerste vier stappen heb je het ontwerp van je zeepje. De mal ontwerp je in de stappen nadien.

![A0]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/3D mal + VIDEO/3D-mal.png)

#### Stap 1: Teken je vorm
Open je gekozen tekenprogramma en ontwerp hierin de vorm van je zeepjes.
In de meeste programma's kan je afbeeldingen van het internet laten overtrekken. 
Als je Fusion 360 gebruikt, kan je dit <a href="https://www.youtube.com/watch?v=twgAwrnEVNw">filmpje</a> bekijken.

![A1]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG1.png)

#### Stap 2: Geef je tekening volume
Om van je 2D plaatje naar een 3D vorm te gaan hebben we een aantal richtlijnen. 
Zorg ervoor dat je vormpje een dikte heeft van 15mm. Details moeten een minimale dikte van 2mm hebben om zichtbaar te zijn. 

![A2]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG2.png)

#### Stap 3: Voeg tekst toe
Je kan je vormpje personaliseren door er een tekstje op te plaatsen. 
Je kiest voor je font het best Arial Rounded MT met een minimale grootte van 38. De tekst op het zeepje zal er precies uitzien zoals de tekst op je scherm. Je moet dus je tekst niet spiegelen.

Je geeft je letters ook een dikte. Zorg ervoor dat ze ook minstens 2mm dik zijn. 

![A3]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG5.png)

#### Stap 4: Verstevig je model
We willen dat ons zeepje niet snel breekt en ook gemakkelijk uit de mal komt. Daarvoor moeten we scherpe hoeken vermijden. Hiervoor gebruik je afrondingen en afschuiningen. Afrondingen op de basis vorm hebben een minimale straal van 2mm. 
![A4.1]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG7.png)

Op de details passen we de afrondingen toe met een straal van minstens 0.60mm. 

![A4.2]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG6.png)

#### Stap 5: Teken de omkasting
Nu de vorm van het zeepje af is, kunnen we beginnen aan de omkasting van de mal. Herhaal hiervoor Stap 1 zodat je de tekening van de zeepvorm weer hebt.

Teken vervolgens rond de vorm een willekeurige rand. Dit wordt later de vorm van je mal. De rand moet overal minstens 5mm van de vorm verwijderd zijn. Als je rand te dicht is, gaat de siliconemal minder stijf zijn. Als je rand te ver is, heb je meer silicone nodig.

Maak van de rand een offset van 2mm. Dit wordt de wand van je omkasting.

![A5]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG8.png)

#### Stap 6: Maak de omkasting
Geef de omkasting een minimale hoogte van 20mm. Aangezien onze vorm 15mm hoog is, houden we 5mm over. Dit is precies voldoende voor de siliconemal. 
Het onderste vlak moet minimaal 1.50mm dik zijn. 

![A6.1]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG9.png)

Om de stevigheid van de mal te verhogen, passen we een afronding me een straal an 4mm toe aan de binnste rand.

![A6.2]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG10.png)

#### Stap 7: Maak de staafjes
We moeten ervoor zorgen dat de vorm op zijn plek blijft terwijl we de silicone in de omkasting gieten. Daarom tekenen we ook een paar staafjes die we nadien aan de vorm kunnen bevestigen. Hieronder zie je de details van de staafjes.

![A7.1]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG13.png)
![A7.2]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG14.png)

De staafjes zorgen er ook voor dat de siliconemal voldoende dikte heeft.

![A7.3]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG12.png)

#### Stap 8: Maak de staafjes
Nu is het tijd om alles af te drukken met de 3D-printer. Hieronder staan een reeks instellingen waarmee je mogelijks meer succes hebt om een goede kwaliteit mal te bekomen.

* Materiaal: PLA
* Brim: Ja
* Supports: No
* Resolutie: 0.15mm
* Infill: 40% 
* Aantal Wandlijnen: 40mm/s
* First layer extrusion width: 115%
* Merk Filament: Esun of een ander hoog kwaliteits merk.
![A7.1]({{ site.baseurl }}/assets/images/2020_07-13-3DPrint_Zeepjes/fotos/FIG13.png)

#### Bestanden van het voorbeeld
Hier kan je de verschillende soorten bestanden van het voorbeeld ontwerp en de bijbehorende mal terugvinden: 
<li>STL bestanden van <a href="assets/images/2020_07-13-3DPrint_Zeepjes/stl/Zeepvorm.STL">het ontwerp</a> en <a href="assets/images/2020_07-13-3DPrint_Zeepjes/stl/Omkasting.STL">de mal</a></li>
<li>IGS bestanden van <a href="assets/images/2020_07-13-3DPrint_Zeepjes/iges/Zeepvorm.IGS">het ontwerp</a> en <a href="assets/images/2020_07-13-3DPrint_Zeepjes/iges/Omkasting.IGS">de mal</a></li>
<li>STEP bestanden van <a href="assets/images/2020_07-13-3DPrint_Zeepjes/step/Zeepvorm.STEP">het ontwerp</a> en <a href="assets/images/2020_07-13-3DPrint_Zeepjes/step/Omkasting.STEP">de mal</a></li>
<li>SLDR bestanden van <a href="assets/images/2020_07-13-3DPrint_Zeepjes/sldr/Zeepvorm.SLDPRT">het ontwerp</a> en <a href="assets/images/2020_07-13-3DPrint_Zeepjes/sldr/Omkasting.SLDPRT">de mal</a></li>

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




