---
layout: post
title:  "Kriebels zelfinductie"
featured: false
published: true
authors: [guest]
lowtech: true
midtech: false
hightech: false
DIT: true
DIY: false
CHALLENGE: false
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : false
licence: CCBY-NC-SA 
categories: [ solderen, elektronica, experimenteren, wetenschap ]
image: assets/images/2020-04-28-kriebels-zelfinductie/afgewerktproject.jpg
tijd: + 3 uur
print: assets/images/2020-04-28-kriebels-zelfinductie/Makers voor Makers Kriebels zelfinductie.pdf
downloads: 
  - name: 'Bouw-Handleiding'
    file: assets/images/2020-04-28-kriebels-zelfinductie/Makers voor Makers Kriebels zelfinductie.pdf
  - name: 'Gebruikshandleiding' 
    file: assets/images/2020-04-28-kriebels-zelfinductie/MvM Kriebels zelfinductie bedieningshandleiding v1_01.pdf
  - name: 'Lasercut file' 
    file: assets/images/22020-04-28-kriebels-zelfinductie/Maakbib kriebels zelfinductie v1.01.svg
  - name: 'Weetjes' 
    file: assets/images/2020-04-28-kriebels-zelfinductie/weetjes.pdf
materialen: [
    MDF 3mm x 43cm x 22cm,
    4x banaan stekker niet geïsoleerd 4 mm, 
    6x Soldeerlip diameter 4 mm, 
    2x Soldeerlip diameter 3 mm, 
    1x Stekkerbus banaan 4 mm rood, 
    1x Stekkerbus banaan 4 mm zwart, 
    18x Blauwe LED 5 mm,
    1x Rode LED 3 mm, 
    1x Drukknop normaal geopend, 
    Wikkeldraad 0.2 mm geïsoleerd 178 meter,
    2x Krimpkous lengte 4 cm diameter 8 mm, 
    2x Krimpkous lengte 5mm diameter 2.5 mm, 
    50 cm geïsoleerde draad rood,
   50 cm geïsoleerde draad zwart,
   50 cm geïsoleerde draad groen,
   1x Batterijhouder AA met soldeeraansluiting, 
   Printplaat soldeereilandjes 5 x 10 cm,
   1x Draadstang M6 verzinkt lengte 80 mm, 
   2x Moer M6 DIN M934 verzinkt,
   1x Dopmoer M6 DIN 1587 verzinkt, 
   4x Moer M4 DIN M934 verzinkt, 
   8x Vlakke sluitring M4 DIN M125 verzinkt, 
   3x Vlakke sluitring M6 DIN M125 verzinkt,
   1x Waaierveerring DIN 6798A M6 verzinkt, 
   2 x Schroef DIN84 M3x8 verzinkt, 
   2x Moer M3 DIN 934 verzinkt, 
   4x Vlakke sluitring M6 DIN M125 verzinkt, 
   2x Schotelveerring DIN 137A M3 verzinkt, 
   4x Zelfklevende vilten voetjes of ander beschermend
materiaal, 
Aluminiumfolie 2 stukjes van 5 x 6,2 cm, 
2x Dubbelzijdige tape met schuim 35x13 mm, 
2x Dubbelzijdige tape 35x17 mm,
Soldeertin, 
Houtlijm, 
Isolatietape 
      ]
tools: [
   Lasercutter, 
Ijzerzaag,
Soldeerbout,
Universele bektang,
Kniptang,
Striptang,
Handboormachine met regelbare snelheid,
Boor 4.5 mm,
Boor 1.5 mm,
Bankschroef, 
Schroevendraaier,
Schaar,
Lijmpistool,
Heteluchtblazer
      ]
---
Opgelet voor elektrocutie!

Ooit geprobeerd om 18 LED's aan te doen met een batterijtje van 1.5V?  

Lichte kriebles om te ervaren hoe je met een heel lage spanning een veel hogere spanning kan creëeren die je kan voelen. 


In dit project maak je een opstelling om te leren over en experimenteren met het begrip **zelfinductie**. 


*Deze handleiding werd ontwikkeld door **Hans Caluwaerts** voor Maakbib.*

## Benodigdheden en bouwinstructies

Alle details over de nodige componenten, waar ze kopen, nodige gereedschap en alle stappen van de constructie vind je in het document 
[Bouwhandleiding]({{ site.baseurl }}/assets/images/2020-04-28-kriebels-zelfinductie/Makers voor Makers Kriebels zelfinductie.pdf) 


## Kriebels zelfinductie de praktijk
De spanning van 1,5 Volt batterij kan je niet voelen. Maar met deze opstelling ga je vaststellen dat je met een spoel en een 1,5 Volt batterij je een vrij hoge inductiespanning kan opwekken.

Onthou dat dit  experiment NIET gevaarlijk is want je werkt met een batterij van 1,5V. Daarom, 
**verbind deze opstelling `NOOIT` met een andere voedingsbron**

Details voor correct gebruik kan je terugvinden in dit document: [Gebruikshandleiding]({{ site.baseurl }}/assets/images/2020-04-28-kriebels-zelfinductie/MvM Kriebels zelfinductie bedieningshandleiding v1_01.pdf) 

Hier samengevat

* Met LEDs kan je de aanwezigheid van de inductiespanning aantonen.
   Wanneer je met je vingers de elektrodes aanraakt kan je de inductiespanning ook voelen.
* Een printje met 1 rode LED beperkt de inductiespanning tot ongeveer 2 Volt, je voelt de
    inductiespanning niet als je de elektrodes aanraakt.
* Een printje met 18 blauwe LEDs beperkt de inductiespanning tot ongeveer 60 Volt, de
inductiespanning doet je vingers lichtjes tintelen als je de elektrodes aanraakt.
* Raak je de elektrodes aan wanneer er geen LEDs verbonden zijn, dan voel je de volledige
onbegrensde inductiespanning.
* Afhankelijk van de weerstand van je lichaam (vochtigheid van je huid) zal je die als lichte
tinteling of eerder als een irriterend gevoel waarnemen.

Met je vingers tegen de elektrodes duwen of je vingertoppen nat maken zal de ervaring nog
intenser maken.


<div class="border_boxmaakbib01_img" markdown="1">
#### Kriebels zelfinductie: de theorie
Een spoel heeft de eigenschap om stroomverandering door de spoel tegen te werken.
Het tegenwerken van de veranderende stroom gebeurt door het opwekken van een inductiespanning, die (theoretisch) zo hoog zal zijn om de verandering te neutraliseren.
Een constante stroom door een spoel wekt een constant magnetisch veld op; een constant magnetisch veld wekt geen inductiespanning op in een vaste spoel.

Als de stroomkring geopend wordt, zal de stroom willen dalen maar de spoel werkt dit tegen. De opgewekte inductiespanning tracht de stroom in stand te houden. De inductiespanning kan zeer groot zijn. De inductiespanning heeft de omgekeerde polariteit als de batterijspanning; de spoel wordt immers generator in plaats van verbruiker.

![theorie]({{ site.baseurl }}/assets/images/2020-04-28-kriebels-zelfinductie/theorie.png)
</div>

## Weetjes
Wil je meer weten over zelfinductie en elektriciteit in het algemeen? 
Hier enkele interessante links. 

#### Filmpjes over spoelen en zelfinductie

*[video 1](https://www.youtube.com/watch?v=NgwXkUt3XxQ)

*[video 2](https://www.youtube.com/watch?v=LXGtE3X2k7Y)

#### Informatie over elektriciteit en experimenten

*[spoel op gelijk stroom](https://patrickvanhoutven.gitbook.io/electric-fundamentals/spoelen/het_gedrag_van_een_spoel_op_gelijkstroom)

*[inductie](https://nl.wikipedia.org/wiki/Inductie_(elektriciteit))

*[werkingsprincipe van een spoel](https://patrickvanhoutven.gitbook.io/electric-fundamentals/spoelen/het_werkingsprincipe_van_een_spoel)

*[diode](https://nl.wikipedia.org/wiki/Diode)

*[inductiespanning](http://www.thuisexperimenteren.nl/science/inductiespanning/inductiespanning.htm)

#### Simulator (java of html5)

[simulator](https://phet.colorado.edu/en/simulations/category/physics/electricity-magnets-and-circuits)

#### Alles wat je wil weten over het aansluiten van LEDs

[LEDs](http://www.linetec.nl/electronics/leds/led_1.html)

<div class="border_boxmaakbib02_img" markdown="1">
#### Hoe bekom je een spoel? 
    
Men bekomt een spoel met bepaalde eigenschappen door een geleider spiraalvormig op te rollen. 
Een voorbeeld hiervan is te zien in de figuur hieronder. De stroom door de opgerolde geleider produceert een elektromagnetisch veld. Rond iedere gemaakte lus (winding) ontstaat een elektromagnetisch veld.

![theorie]({{ site.baseurl }}/assets/images/2020-04-28-kriebels-zelfinductie/spoel_batt.png)

Een spoel kan gewikkeld worden rondom een materiaal, de kern, genoemd. 
Het aantal windingen van de draad, het type kern, de lengte en de dwarsdoorsnede van de kern zijn allemaal factoren bij het instellen van de waarde van inductie.

![theorie]({{ site.baseurl }}/assets/images/2020-04-28-kriebels-zelfinductie/spoel.png)

</div>

