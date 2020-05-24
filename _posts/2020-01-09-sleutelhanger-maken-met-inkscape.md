---
layout: post
title:  "Sleutelhanger maken met Inkscape en de Lasercutter"
authors: [amy]
featured: false
lowtech: false
midtech: false
hightech: true
DIT: true
DIY: false
CHALLENGE: false
duurtijd: "1u30"
moeilijkheidsgraad_1_3: 1
prijs_1_3: 0
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : false
categories: [ lasercutter, 2D-tekenen ]
image: assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image22.png
print: false
benodigdheden:  [
  Computer met muis,
  De Inkscape software,
  Een Lasersnijder,
]
---
Je wil een sleutelhanger maken uit een materiaal die in de lasercutter past? We leren je hoe dat moet doen.

## Benodigdheden

{% include benodigdheden.html %}

## Stap 1: Open inkscape
Inkscape is wat men een vectorieel tekenprogramma noemt. Het staat op de computers voorgeinstalleerd. Werk je thuis? Je kan het gratis installeren van [inkscape.org](https://inkscape.org/release)

## Stap 2: Zoek online een tekening die je leuk vind
Bij [Google afbeeldingen](https://www.google.be/imghp?hl=nl) kun je extra zoekcriteria invullen. 

Gebruik extra zoekterm voor de kleur: zwart wit
Gebruik extra zoekterm voor het type: silhouet of lijntekening of clip art

Bevoorbeeld: [minion zwart wit silhouet](https://www.google.be/imghp?q=minion+zwart+wit+silhouet&hl=nl)

## Stap 3: importeer of copy paste deze foto in Inkscape. 

Je kan dit via het `Bestand` menu van Inkscape of via drag en drop naar Inkscape.

_Opmerkingen_: 

* Indien je een foto kopieert in Inkscape sla ALLES voordien op. De laatste versie van Inkscape durft zichzelf af te sluiten bij het plakken van een grote foto
* Als je een foto wilt plakken maar er komt niets in inkscape, of het is een zwart vlak: save deze dan lokaal eerst op je computer en probeer vanaf daar. Gebruik eventueel een screenshot tool om een nieuwe afbeelding te maken (Clipping tool in windows bevoorbeeld)

Je figuur zal verschijnen in Inkscape

![geimporteerde figuur]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image11.png)

## Stap 4: Trace bitmap de foto. 

1. Selecteer je foto
2. Ga naar menu `Paden`
3. Klik op `Bitmap Overtrekken...` (Trace Bitmap)
  ![trace bitmap menu]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image2.png)
4. Je krijgt een kader met extra parameters:
    * Door je treshold aan te passen krijg je meer of minder zwarte lijnen. 
    * Kies voor **de eerste optie**.
5. Klik op bijwerken en dan ok. 
  ![trace dialoog]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image22.png)
6. Je hebt nu een vector tekening gemaakt. 

## Stap 5: verwijder de originele (pixel) foto
De originele foto kun je nu verwijderen, deze is niet meer nodig. Om zeker te zijn dat je de juiste foto verwijdert: zoom in op beide (selecteer hiervoor in tool menu het vergrootglas, telkens je klikt zoom je in). 
Wanneer je blokjes (pixels) ziet, zie je de foto. Als het een gladde lijn is dan zie je de vector. Selecteer het object met de pixels en druk de **Delete** toets om die te verwijderen. 

In volgende afbeelding zie je links de foto, rechts de vectortekening.

![ingezoomde tekening]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image17.png)

Je kan terug uitzoomen naar normale grootte via de selectieknoppen bovenaan Inkscape als het zoom tool geselecteerd is.

## Stap 6: Kopieer de vector tekening 

Doe copy van je tekening, en plak een copie ervan ernaast zodat je de figuur **twee keer** hebt.


![twee keer figuur]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image16.png)

## Stap 7: Zet de vulling van een vector tekening uit maar zorg dat je de lijnen ziet staan. 

1. Selecteer een van je tekeningen
2. Ga naar `object -> vulling en lijn`
3. In het tabblad vulling:
    * Klik op het kruisje (tekening nog steeds geselecteerd)
    * Nu lijkt je tekening volledig weg te zijn
  ![tabblad vulling]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image21.png)
4. In het tabblad lijnkleur: 
    * Klik op het vierkantje naast het kruisje
    * Kies een kleur
  ![tabblad lijnkleur]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image25.png)
5. In het tabblad lijnstijl:
    * Geef de lijn een dikte, bv 0.1 mm. 
  ![tabblad lijnstijl]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image15.png)

## Stap 8: break apart
We gebruiken de break apart functie om alle stukjes los te maken van elkaar. 

* Selecteer menu `Paden -> Opdelen` (Path -> Break Apart)
* Alle stukken zijn nu los van elkaar verplaatsbaar.
* Haal nu alle stukken uit je tekening zodat je **alleen maar de buitenlijn overhoudt**. 

![verwijderen binnendelen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image18.png)
  
Opmerking 1: wanneer je de vulling niet hebt uitgezet, dan zal je volledige tekening nu zwart zijn zoals in onderstaande figuur. 

![vulling nog aan]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image19.png)

Opmerking2 : indien je geen gesloten lijn hebt ga verder naar sectie extra hieronder

## Stap 9: pas de lijnkleur van je overgebleven lijn aan. 

1. Ga naar `object -> vulling en lijn`
2. In het tabblad lijnkleur: 
    * Klik op het vierkantje naast het kruisje
    * Kies de kleur rood 
        * RGB waarde: 
          R: 255
          G: 0
          B: 0
3. In het tabblad lijnstijl:
    * Geef de lijn de dikte 0.1 mm of 0.5 mm

![rode kleur aan lijn]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image15b.png)

## Stap 10: schuif je rode lijn en je vector tekening over elkaar.

Je had een kopie gemaakt van je vectortekening in Stap 6. We gebruiken deze nu om de deze te combineren met de overgebleven rode lijn.

1. Selecteer je rode lijn
2. Selecteer je zwarte vector tekening uit stap 6
3. Ga naar `Object -> uitlijning en verdeling` (align and distribute)
4. Kies in het menu voor de twee middelste icoontjes
    * Horizontaal uitlijnen
    * Verticaal uitlijnen
5. Nu staan je twee tekeningen perfect over elkaar zoals in volgende figuur rechts:

![rode kleur aan lijn]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image20.png)

## Stap 11: verschaal je tekening naar iets dat kleiner is dan 60mm op 40 mm.

Een sleutelhanger is niet te groot en niet te klein. Maak je figuur de juiste grootte.

1. Groepeer je zwarte en rode figuur door ze beide te selecteren, en CTRL+G te drukken (of via menu `Object -> Groepeer`)
2. In Tool menu, selecteer het selectietool (F1), en selecteer je figuren. Bovenaan in de menubalk kun je de grootte van je figuur wijzigen. 
    * zorg dat het slot aan staat, de verhouding tussen breedte en hoogte blijft dan gelijk.
    * wijzig eenheid naar **mm** indien het iets anders is
3. Zorg dat de grootte ongeveer 60mm op 40 mm is.

![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image22b.png)

## Stap 12: maak een gaatje voor een touwtje of sleutelhanger ring. 

1. Ga naar de tekentool om een cirkel te tekenen
2. Doe de vulling weg
3. Pas de lijnkleur aan naar RGB rood en lijndikte 0.1 of 0.5mm

Opmerking: Plaats het gaatje niet te dicht bij de rand van je figuur, maar ook niet te ver. In volgende figuur is enkel de linker figuur goed! 

![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image7.png)

## Stap 13: Laseren

Je kan nu de figuur laten laseren. De rode lijn is snijlijn, de zwarte kun je rasteren (best) of graveren (opgelet is vulling dus dubbele lijn als je graveert). 

Zie de handleiding van de lasercutter om te weten hoe dat moet.

## Extra: Wat als de lijnen niet gesloten zijn

Bij stap 8 bleek dat de lijnen niet gesloten zijn.  

* Ga naar het `paden aanpassen tool` (anchor points tool)
![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image23.png)
* Je lijnen krijgen nu overal kleine puntjes. Deze kun je verslepen om het pad van de lijnen te vervormen. 
* Wanneer je twee lijnen aan elkaar wil zetten moet je ze eerst losmaken door:
    * De twee punten te selecteren
    
    ![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image3.png)
    * Het `knip` tool te gebruiken. 
    
    ![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image3b.png)
    * Hierna verdwijnt een stuk pad
    
    ![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image12.png)
* Doe dit ook met de andere uiteinden.
* Wanneer je de punten nu aan elkaar wil zetten gebruik je de `plak` tool
    * Selecteer de twee punten die je aan elkaar wil hangen
    
    ![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image14.png)
    * Gebruik het plak tool. 
    
    ![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image5b.png)
    * Hierna zijn de twee knopen verbonden
    
    ![grootte wijzigen]({{ site.baseurl }}/assets/images/2020-01-09-sleutelhanger-maken-met-inkscape/image5.png)
* Doe opnieuw een `break apart` om het middelste stuk eruit te halen. 
* Ga naar **stap 9** om verder te werken


## Voorbeelden
Heb je een foto van je sleuterhanger? Stuur hem ons!