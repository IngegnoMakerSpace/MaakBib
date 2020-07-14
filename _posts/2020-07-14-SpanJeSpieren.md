---
layout: post
title:  "Span je spieren"
featured: false
published: true
authors: [guest]
author_name: "Sandra Nauwelaerts"
lowtech: false
midtech: true
hightech: false
DIT: true
DIY: true
CHALLENGE: false
moeilijkheidsgraad_1_3: 2
prijs_1_3: 1
pijler_tinkering : true
pijler_design_thinking : false
pijler_digitale_fabricatie : false
pijler_physical_computing : true
licence: CCBY-NC-SA 
categories: [ robotica, wetenschappen ]
image: assets/images/2020-07-14-SpanJeSpieren/Fig0.png
tijd: 3 uur
print: assets/images/2020-07-14-SpanJeSpieren/Makers voor Makers Span je spieren.pdf 
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-07-14-SpanJeSpieren/Makers voor Makers Span je spieren.pdf  
materialen_dontshow: true
tools_show: false

materialen: [
    A. Myoware spiersensor, 
    B. Microbit, 
    C. Oppervlakteelectrodes (3 per spiersensor),
    D. Soldeersel,
    E. Gekleurde electrische kabels,
    F. Krokodillenklemmen,
    G. Micro-USB naar USB kabel,
    H. Alcoholdoekjes,
    I. Velcro kabelbinders of Sportstape,
      ]
      
---
Maak een EMG systeem om je spieractiviteit te meten en te relateren met bewegingen!

Dit stappenplan bouwt stap voor stap een eenvoudig EMG systeem. Dit is een instument dat de spieractiviteit in kaart brengt. Tegelijkertijd meet je de gewrichtshoek zodat je beweging kan relateren aan spieractiviteit.

*Deze handleiding werd ontwikkeld door **Sandra Nauwelaerts** voor Maakbib*.

## Benodigdheden

<div class="benodigdheden">
  <ul>
    Materialen:
    <li>A. Myoware spiersensor</li> 
    <li>B. Microbit</li>
    <li>C. Oppervlakteelectrodes (3 per spiersensor)</li>
    <li>D. Soldeersel</li>
    <li>E. Gekleurde electrische kabels</li>
    <li>F. Krokodillenklemmen</li>
    <li>G. Micro-USB naar USB kabel</li>
    <li>H. Alcoholdoekjes</li>
    <li>I. Velcro kabelbinders of Sportstape</li>
  </ul>
</div>

![B1]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig1.png)

<div class="benodigdheden">
  <ul>
    Tools:
    <li>A. Derde handje met vergrootglas</li>
    <li>B. Soldeerbout</li>
    <li>C. Kniptang</li>
    <li>D. Stripper</li>
    <li>E. Lijmpistool</li>
    <li>F. Laptop</li>
 </ul>
</div>

![B2]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig2.png)


{% include benodigdheden.html %}


## Project Overzicht
In het eerste gedeelte zullen we de sensor zelf bouwen. Nadien gaan we over naar de sensor kalibreren en metingen uitvoeren. 

## Sensor Assembleren
#### Stap 1: Knip de draden
Bepaal welke spier en welke hoek je wil meten. Wij nemen als voorbeeld de biceps met de onderarmhoek. Meet de lengte van de onderarm. Knip 3 draden van deze lengte in verschillende kleuren (rood, zwart en wit). Strip ongeveer 1 cm aan beide kanten eraf.

#### Stap 2: Verbind de Myoware spiersensor
Neem de myoware sensor. Maak de rode draad vast aan het + contact en soldeer het vast. Maak de zwarte draad vast aan het – contact en soldeer vast. Meer info over solderen vind je <a href="https://maakbib.be/assets/images/2020-04-22_soldeerexperiment/Solderen%20is%20simpel_by_%20Mitch%20Altman.pdf">hier</a> en <a href="https://maakbib.be/assets/images/2020-04-22_soldeerexperiment/4%20stappen_solderen.pdf">hier</a>. 

De witte draad zet je vast aan het RAW signaal aan de andere kant van de sensor. Knip het overschot af aan de kant van de sensor. Soldeer een krokodillenklem aan het andere uiteinde.

Je resultaat zou er als volgt moeten uitzien:

![SS2.1]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig4.png)

Zet de kabels vast met twee druppeltjes lijm zodat de kabels parallel lopen en het contact beschermd is.

![SS2.2]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig5.png)

#### Stap 3: Electrodes aan de sensor
Maak de oppervlakte-electrodes vast aan de sensor. Twee electrodes klikken vast via de drukknop aan de onderzijde van de sensor; een derde wordt vastgemaakt aan de drukknop van de zwarte kabel.

Je resultaat ziet er dan als volgt uit:

![SS3]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig6.png)

#### Stap 4: Sluit de microbit aan
Verbind de kabels via de krokodillenklemmetjes: de rode draad (+) van de sensor met de 3V uitgang van de microbit, de zwarte draad (-) met de GND van de microbit en de witte draad (RAW) met kanaal 1 van de microbit. Gebruik je een tweede sensor, sluit deze dan op dezelfde manier aan maar breng het signaal over naar kanaal 2.

![SS4]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig7.png)

## Metingen Uitvoeren
#### Stap 1: Microbit programmeren
In de [makecode software](https://makecode.microbit.org/) (beschikbaar ook [offline](https://makecode.microbit.org/offline-app)), maak je een nieuw project met een forever loop die drie variabelen wegschrijft (indien je 2 EMG sensoren gebruikt): twee variabelen waarin de EMG signalen worden opgeslagen en een variabele die de beweging van je segment registreert. 

In onderstaand voorbeeld, zit er een sensor op de biceps en een op de triceps van de bovenarm en meten we tegelijkertijd de ellebooghoek door de microbit zelf.

![MS1]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig8.png)


#### Stap 2: Spiersensor aanbrengen
Maak de huid van je proefpersoon proper met een alcohol doekje.

De myoware sensor breng je aan op de buik van de spier. De electrode die vasthangt aan de zwarte kabel, is de referentie-electrode en die moet zo dicht mogelijk bij een bot worden vastgeplakt. Breng daarom de referentie- electrode eerst aan, zodat de kabel zeker lang genoeg is.

In het voorbeeld van de biceps, breng je de referentiekabel aan de elleboog aan, om vervolgens de twee spierelectrodes aan te brengen. Dit doe je door aan je testpersoon te vragen zijn spieren hard op te spannen. Voel waar de spier loopt en breng de sensor parallel aan op de looprichting van de spier. Vraag je testpersoon of hij/zij zijn arm nog goed kan strekken of buigen.

![MS2]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig9.png)

#### Stap 3: Microbit aanbrengen
Plaats de microbit tegen de huid, parallel met de arm. Wees voorzichtig dat de draden niet kruisen. Zet de microbit vast met een velcro kabelbinder of sporttape. Verbind de microbit met de kabel naar de laptop via de microUSB poort aan de bovenzijde van de microbit naar de USB poort van de laptop.

![MS3]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig10.png)

#### Stap 4: Opstelling testen
Download het programma naar de microbit. Van zodra de microbit verbonden is met de laptop, verscheen ook de knop `show console device` in de MakeCode Editor. Klik op deze knop en een grafiek met de real time data verschijnt op het scherm.

![MS4.1]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig11.png)

Test eerst de hoek. Buig en strek de arm zonder de schouder te bewegen. De hoek die op de grafiek verschijnt zou moeten overeenkomen met de hoek van de onderarm met een horizontale. Is dit niet het geval, dan kan je ofwel de microbit zelf draaien of in het programma “roll” in plaats van “pitch” selecteren. Download het nieuwe programma naar de microbit en test de hoek opnieuw.

![MS4.2]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig12.png)

Test daarna de spiersensor. Vraag je testpersoon de spieren krachtig op te spannen en te ontspannen. De amplitude (uitwijking) van het EMG signaal zou duidelijk zichtbaar moeten zijn. Is er heel veel ruis, ook bij het niet aanspannen van de spier en het bewegen van de arm, zorg er dan voor dat de laptop op de batterij werkt en niet in het stopcontact zit. Werkt de sensor nog steeds niet, kijk dan goed na of je correct gesoldeerd hebt.

#### Stap 5: Spieractiviteit meten
Als alles werkt, herstart je de meting door op `Go Back` te klikken en daarna opnieuw op `Show Console Device`. Dit maakt de opnamegrafiek leeg. Normaal gezien begint de opname vanzelf, tenzij je op de pauzeknop gedrukt hebt. Ben je tevreden over je meting, download deze dan als een csv file via de knoppen rechtsboven.

![MS5]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig13.png)

#### Stap 6: Data analyseren
Open het gedownload cvs bestand in een spreadsheet tool zoals Excel, Google Spreadsheet, of LibreOffice Calc. Maak een grafiek met de EMG patronen op de primaire Y-as en de hoek op een secondair Y-as. Zo worden beide signalen maximaal verspreid over de grafiek. Kijk naar de timing van de spieractiviteit en de armhoek.

![MS6]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig14.png)

Op deze grafiek stijgt de oranje curve als de arm buigt, en daalt ze als de arm strekt (oranje pijlen). De biceps is actief (de amplitude gaat omhoog, aangegeven door blauwe pijl) als de arm buigt. Dit komt overeen met de functie van de biceps: de arm te buigen. De biceps is nog even actief aan het begin van het strekken: de biceps stabiliseert de arm terwijl de triceps de arm strekt. In deze test boog en strekte de testpersoon de arm drie keer.

#### Maak het je eigen!
Je kan deze opstelling gebruiken om functies van spieren na te gaan. Heb je twee spiersensoren, dan kan je bijvoorbeeld biceps en triceps in de arm meten. Dit zijn twee antagonisten, dit wil zeggen dat ze tegengesteld werken. Bij het armbuigen en strekken wisselen hun activiteit af. 

Je kan ook het effect nagaan van een extra gewicht vast te nemen. Wat gebeurt er dan met het EMG signaal? Of je kan testen wat er gebeurt als je vermoeid geraakt. 

Probeer telkens voor je een test doet, goed na te denken over je vraag, en een hypothese en een voorspelling op te stellen. Op basis van je metingen, kan je dan nagaan of je gelijk had.

Technisch gezien, kan je ook nog een en ander aanpassen. De frequentie (hoeveel metingen per seconde) waarmee de microbit het EMG signaal registreert is laag, een andere DAQ-board of een Arduino kan aan een hogere frequentie samplen waardoor het EMG signaal duidelijker zal zijn. Undersampling bij de microbit zorgt ervoor dat het signaal soms een onverwachte vorm heeft.

![MS7]({{ site.baseurl }}/assets/images/2020-07-14-SpanJeSpieren/Fig15.png)

Je kan ook de spiersensor aansluiten op de EMG envelope in plaats van de RAW data (A). Dit signaal wordt eerst positief gemaakt (B) en geintegreerd (C). Dit signaal is duidelijker maar het echte effect van een EMG is dan weg.



## Wist je dat...?
<div class="border_boxmaakbib01_img" markdown="1">
#### Weetjes
* Je spieren worden door je zenuwen aangestuurd via electrische actiepotentialen. Deze spanningen zijn klein dus dit signaal wordt door de sensor 200 keer versterkt zodat het groot genoeg is om als analoog signaal te worden ingelezen via de microbit.
 
* De sensor wordt gevoed met 3V vanaf de microbit. Je kan ook werken met een externe batterij. Je mag maximaal 5.7 V als voeding geven. De voeding moet ook stabiel zijn. Vandaar dat bij slecht signaal, er wordt aangeraden de laptop niet in het stopcontact te steken.
 
</div>
