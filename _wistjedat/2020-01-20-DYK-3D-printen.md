---
layout: wistjedat
title:  "Did You Know? 3D-Printen."
authors: [len]
featured: false
lowtech: false
midtech: true
hightech: true
categories: [ tutorial ]
image: assets/wistjedat/DYK-3D-printen/DYK-3D-printen.png
---

Je wil meer weten over 3D-printen? We leren er je alle details over in deze __Wist je dat?__

## 3D-printen

Dit document is momenteel enkel beschikbaar als een 
<a href="https://docs.google.com/document/d/e/2PACX-1vTdpG3hB1zBGy-JLD-4iYop8BpCYNpn9grKuR62ac40lQkqTkt35iZ8_HNLbDCkw_A8bYNm848Bz6ce/pub" target="_blank">Google doc publicatie</a>. Leden MaakBib hebben toegang via de gedeelde drive.

Je kan wijzigingen of aanvullingen doorsturen naar ons.

## Intro

Het doel van dit onderdeel is om de workshopbegeleider achtergrondinformatie te geven rond 3D-printen.
Een workshop begeleiden houd meer in dan enkel met de machine te kunnen werken.
Deze achtergrondinformatie zal helpen om mogelijke vragen van deelnemers te beantwoorden.

3D-printen is een productieproces waarbij succesvol verschillende lagen materiaal op elkaar worden gehecht.  
![3D kegel]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint01.jpg)

Dit is een techniek die vaak als nieuw wordt beschouwd maar ze bestaat al 30 jaar. 

Ongeveer 10 jaar geleden zijn veel patenten op deze techniek verlopen en werd het mogelijk, dankzij het open source project RepRap, deze techniek te introduceren voor het grote publiek.
Het RepRap project had als doel een low cost printer te maken aan de hand van 3D-printen: 3D printers die 3D printers printen.
Doordat alle files openbaar waren, ontstond een grote community en vele start-ups die betaalbare printers (als bouwpakket ) ontwikkelden en verkochten.

Ondertussen is 3D-printen alom bekend en een techniek die niet enkel in de industrie gebruikt wordt maar ook door vele (hobby)makers thuis.

Als weetje, de eerste “betaalbare” 3D printer was een SLA printer van Chuck Hall (1984).

De term 3D-printen werd pas in 1996 geïntroduceerd. De technische oorspronkelijk term was/is Additive Manifacturing (Additieve fabricatie techniek).

## Introductie in het 3D-printproces

Het proces, dat we 3D-printen noemen, verloopt in verschillende stappen. Die we hieronder in meer detail zullen beschrijven.
![het proces]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint01.png)

### Het proces
#### 3D file
Om een 3D printer te laten werken moeten we beginnen met een digitaal 3D ontwerp, meestal een .stl file. Dit is een tekening van je model dat in 3D is opgebouwd. Deze kan je zelf maken met een van de talloze softwarepakketten (betalend of gratis) zoals [Tinkercad](https://www.tinkercad.com/), [Fusion 360](https://www.autodesk.com/products/fusion-360/overview), [Onshape](https://www.onshape.com/), ..., of je kan een bestaande file van het internet downloaden vanuit websites zoals [thingiverse](https://www.thingiverse.com), [youmagine](https://www.youmagine.com/), [myminifactory](https://www.myminifactory.com), ...

![3d file]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint02.png)

#### Slicing
Voor men een .stl file (3D file) kan doorsturen naar de printer moet men deze slicen. Dit gebeurd via software, die we een slicer noemen.  
![3d file]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint03.png)

[Cura](https://ultimaker.com/software/ultimaker-cura) is  een van de bekendste slicers, naast prusaslicer, slic3r en Simplify3D. Een slicer software is een soort vertaler voor je 3D printer. Dit programma vertaalt het 3D ontwerp, je .stl-bestand in bewegingen die  de kop van de printer aansturen, zodat de printer correct materiaal kan spuiten. Dit bestand noemen we de g.code en bevat alle coördinaten die de printer nodig heeft.

Vergelijkbaar met deze technologie is een CT scan die we kennen uit het ziekenhuis, de CT scan kan namelijk afbeeldingen maken van hele dunne plakjes van het lichaam, als je deze laagjes zou opstapelen dan zou je een driedimensionaal model van je lichaam hebben.

Tijdens het slicen kunnen we verschillende parameters meegeven, bv:

* dikte van de lagen
* dikte van de onder-/bovenlaag
* dikte van de randen
* mate van de opvulling
* snelheid van de printmotoren
* dikte van het filament
* smelttemperatuur
* …

Iedere 3D-printer heeft zijn eigen specifieke kenmerken en aansturing, o.a. de vorm, lengte, breedte van de grondplaat, de print hoogte, het soort filament, …).
De slicer moet dus nauw samenwerken met de stuursoftware van je type printer. Na het slicen wordt de `.STL` opgeslagen als een `.GCODE` file welke de bewegingen van de motoren beschrijft. 

#### 3D-printen
De G-code wordt naar de printer gestuurd en het printen kan starten. 
Afhankelijk van de grootte en de vorm van het ontwerp kan een print van enkele minuten tot enkele uren duren.  
![3d file]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint04.png)

#### Nabewerking
Als de printer klaar is kan de print verwijderd worden uit de machine. Sommige prints moeten nog bewerkt worden. De nabewerking kan inhouden dat support verwijderd wordt of dat de print geschuurd moet worden. 


## Verschillende soorten 3D printers
In het volgende deel zullen we de 4 meest voorkomende 3D printers bespreken. Er bestaan verschillende types printers. Allemaal gebruiken ze hetzelfde principe: ze leggen materiaallaag op materiaallaag om een object op te bouwen, (additive manifacturing).  

### FDM (Fused Deposition Modeling)
Dit is bij uitstek de meest populaire methode bij hobbyisten om te gaan 3D-printen. Deze techniek houdt in dat er een kunststof wordt gesmolten tot het een vloeibare substantie is (stroopachtig). Dit filament wordt op een (verwarmd) bed aangebracht en koelt snel af waardoor het zijn vorm blijft behouden. Daarna worden de volgende lagen daarop aangebracht. 
![printer]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint05.png)

De meest gebruikte plastic soorten die hiervoor worden gebruikt zijn PLA, ABS en composietmaterialen (een mengeling van kunststof met bv hout , brons, koper,…)

### SLA / DPL (Stereolithografie / digital light Processing)
Deze techniek gebruikt licht om een vloeibaar polymeer uit te harden. Het printbed bestaat uit een bassin gevuld met een resin vloeistof. Een lichtbron laat specifieke delen van deze vloeistof uitharden. Eenmaal de eerste laag is uitgehard verplaatst het bed zodanig dat de volgende laag kan worden uitgehard. De vorm wordt als het ware uit de vloeistof getrokken. 

![printer]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint06.png)

Het grote voordeel van deze techniek is dat er meer detail in het geprinte stuk zal zijn, de lagen zullen ook minder zichtbaar zijn. Stukken die ondersteuning nodig hebben zullen dit hier wel nog altijd nodig hebben. 

### SLS ( Selective Laser sintering)

Deze methode heeft heeft een aantal gelijkenissen met SLA printen. Het grote verschil is dat er hier geen vloeistof aan te pas komt. Dit type printer heeft een bak met poeder die hij door middel van een laser lokaal aan elkaar laat smelten. 

![printer]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint07.png)

Het grote voordeel van deze techniek is dat je bijna volledige vormvrijheid hebt en je nooit rekening moet houden met ondersteuning. Holtes dienen wel minstens 1 gat te hebben, zodat het niet gebruikte poeder kan worden verwijderd. Een veel gebruikt materiaal hiervoor is nylon.

## Waarom 3D-printen (voordeel)
### Minder afval
De meeste maak-technieken die gebruikt worden zijn gebaseerd op ‘subtractieve’ methodes. Hierbij wordt materiaal verwijderd van een blok. Denk maar aan een blok hout waaruit een handvat geschuurd wordt. Dit resulteert in veel verlies van materiaal. Omdat 3D-printen een opbouwende techniek is wordt enkel het materiaal gebruikt dat nodig is om de vorm te bekomen.
We voegen er in een voetnoot wel aan bij dat dit gaat over het maken van de 3D-print stukken. Soms mislukt een print, gelukkig kunnen deze ook gerecycleerd worden door gespecialiseerde bedrijven. 
### Customisation / op maat
Om de grote vraag van de consumenten te beantwoorden worden de meeste verbruiksgoederen op grote schaal gemaakt. Als iets op grote schaal gemaakt is, is de kans groot dat je hetzelfde zal hebben als vele andere. Door middel van 3D-printen kan je onderdelen, producten, goederen, ... gaan maken die op maat gemaakt zijn. Dit is niet enkel leuker om gepersonaliseerde dingen te hebben maar het laat ook toe om met specifieke persoonlijke en unieke noden rekening te houden. 
### Complexe vormen.
De meeste traditionele productietechnieken zijn niet in staat om complexe vormen te maken. Dit koste voor het 3D-print tijdperk veel tijd en geld om complexe vormen te maken. Tegenwoordig bestaan er bijna geen limieten meer op de vorm die je wilt maken. De grootste uitdaging is om een digitale file te maken van de juiste vorm.
### Efficiënt prototypen.
Het is tegenwoordig mogelijk om heel snel prototypes te gaan maken met een printer. Het ontwerpproces verloopt veel efficiënter in vergelijking met vroeger toen men naast lange wachten ook met hoge kost aan materialen rekening moest houden. 3D printers kunnen heel makkelijk in een bureau geplaatst worden om snel prototypes te printen.

## De limieten van 3D-printen
### Snelheid en grote oplages
3D-printen biedt een oplossing voor het maken van unieke stukken en kleine oplages omdat er geen of weinig setup nodig is. Indien men grote oplages van hetzelfde product wenst te maken zijn er andere technieken die meer voordelen bieden. Door de lange printtijd per stuk is het niet handig om deze techniek te gebruiken in reeks producties. 
### Materiaalkost voor grote oplages.
Bij traditionele productie verlaagt de kost als je grote oplages van iets maakt. De kost van het printproces is afhankelijk van het gebruikt materiaal. Hierdoor blijft de stukprijs hetzelfde als je 1 stuk maakt of 100 stuks. Een gevolg hiervan is dat grote oplages vaak duur zijn in vergelijking met andere technieken zoals bijvoorbeeld spuitgieten.
### Materialen
Er bestaan al verschillende soorten materialen die gebruikt worden bij het 3D-printproces. Maar deze blijven echter nog te beperkt in vergelijking met  traditionele methodes. Nog verder ontwikkeling en onderzoek zal in de toekomst verandering brengen.
### Precisie
In de industrie is het vaak belangrijk dat wat gemaakt wordt zeer nauwkeurig is. De meeste printers hebben een nauwkeurigheid van 0,1 mm, dit is vaak minder nauwkeurig dan andere traditionele productietechnieken

## Enkele toepassingsgebieden
### Architectuur
Vroeger werden alle maquettes van huizen en gebouwen met de hand gemaakt. Dit was heel vaak een werk van verschillende dagen. Tegenwoordig kunnen architecten volledige of onderdelen van maquettes laten printen. Hiervoor gebruiken ze de files die ze ook bij bv. 3d renderingen kunnen gebruiken of 3d technische tekeningen die toch voor de uitwerkingen gemaakt worden.  

![model huis]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint08.png)

### Protheses / medische sector
Door middel van de 3D-printtechniek kunnen artsen, ergotherapeuten, ontwerpers steeds beter passende protheses maken. In het verleden werden deze in grote oplages gemaakt. Dit had als gevolg dat de protheses die toen gemaakt werden voor iedereen een beetje paste maar voor niemand perfect was. Dankzij de 3D techniek kunnen ze protheses maken die gepersonaliseerd zijn. Dit wil zeggen dat personen een op maat gemaakte prothese kunnen krijgen aan een betaalbare prijs. Ook tandartsen maken hier al gebruik van om nieuwe tanden te printen die perfect passen in het gebit van hun patiënten of 3d-modellen te maken om beugels op maat te maken, ...

### Prototypes
Een veel gebruikte toepassing is het printen van prototypes. Dit wordt in de industrie vaak gedaan voor een nieuw product in grote oplage gefabriceerd wordt. Ze gebruiken dit geprint prototype als testobject. De grootste fouten kunnen hier al opgespoord worden voor de massaproductie wordt opgestart.

### Hobby
Tegenwoordig zijn er al veel hobby printers op de markt die betaalbaar zijn. Er is een grote cultuur van makers die zich daarop heeft toegespitst. Deze makers vinden het meestal gewoon een leuke hobby om zich daar mee bezig te houden. Deze mensen printen van alles: van leuke gadgets tot functionele stukken die men thuis kan gebruiken.

![prothese arm]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint09.png)

## 3D-printen met kinderen
In de industrie zijn er reeds veel jobs te vinden waarbij 3D-printen gebruikt wordt. Naarmate dat de techniek verder ontwikkelt zullen er ook nog meer types  jobs bijkomen. 
De globale digitalisering op het werkveld van verschillende sectoren zorg er voor dat we onze jongeren hierop moeten voorbereiden. Leren 3D tekeningen maken en die dan uitprinten met een 3D printer is dan ook een nodige skill waarmee veel kinderen later nog in contact zullen komen: dit helpt bij het ontwikkelen en trainen van uitstekend 3D inzicht, coördinerend vermogen en materialenkennis.  

3D-printen en vooral 3D leren tekenen is niet enkel een educatieve manier om 3D inzicht te trainen maar het is ook leuk, en daardoor ook extra motiverend voor jonge gebruikers.

Het 3D-printen is ook ideaal om vakoverschrijdend te gaan werken. Bv. bij het maken van een opstel rond fossielen zou men 3d modellen kunnen printen, voor een wiskundeles zou men de bouwstenen kunnen printen om complexe geometrische figuren te ontleden en voor een kunstproject kan men 3D sculpturen maken met oog op vormgeving en esthetiek.

## Hoe maak ik files die kunnen geprint worden?
Er bestaat een grote open source gemeenschap op het internet die veel files gratis ter beschikking stelt. Daarnaast zijn er verschillende CAD pakketten (tekensoftware) die het mogelijk maken om een computertekening te maken die later geprint kan worden.

### Modellen downloaden van het internet
Bij een eerste kennismaking met de techniek en het gebruik van het toestel of bij geval van geen ervaring met 3D tekenprogramma’s kan men files van het internet halen. 

Hieronder een lijst met enkele bekendes sites waar printklare files kunnen gevonden worden. 

* [Thingiverse](http://www.tinkercad.com)
* [3Dker](http://www.3dker.com) 
* [MyMiniFactory](http://www.myminifactory.com) 
* [Youmagine](http://www.youmagine.com) 

### Tekenpakketen (CAD programma’s) 
CAD staat voor Computer-Aided Design software. Dit zijn computerprogramma’s die helpen bij het ontwerpproces. Deze programma’s kunnen in 2D of 3D tekenen (soms beide), veel van de files die je maakt om te printen worden met een CAD programma gemaakt. CAD is uitgevonden in de jaren ‘60 en heeft sindsdien al het manueel tekenwerk overgenomen. De reden hiervoor is dat het veel sneller, accurater en makkelijker is om een ontwerp aan te passen. 
CAD wordt in zeer veel sectoren gebruikt van architectuur tot engineering en design, maar ook in animatie, game design, educatie. 

Niet alle tekenprogramma’s voor het 3D ontwerpen zijn open source of gratis te gebruiken. Maar er is voldoende keuze om ook als hobbyist aan de slag te gaan met semi-professionele programma's. Er zijn een aantal CAD programma's die geen voorkennis of jarenlange opleiding vereisen om te kunnen gebruiken. 
Het is aan te raden om verschillende programma’s uit te testen en uit te zoeken welke voor jou het beste is. Er is niet 1 programma dat voor alles geschikt is. Elk heeft z’n eigen voordeel (en nadeel). Er zijn programma's om zeer technisch te gaan werken of programma's die bedoeld zijn om te sculpturen. 

Hieronder een lijstje met verschillende programma's, deze zijn volledig **open source of gratis** te gebruiken zolang het **voor educatieve doeleinden** is. 

#### Tinkercad

Dit is naar onze ervaring het meest kindvriendelijke en gebruiksvriendelijke programma die te vinden is. Tinkercad is een programma van Autodesk en werkt vanaf de website Tinkercad.com. Je tekent dus op de website, en slaat je tekeningen op in de ‘cloud’ van Autodesk en niet op je computer.

Het programma bestaat uit een bibliotheek met basisvormen waarmee je figuren kan opbouwen. 

We hebben een gebruiksvriendelijk handleiding in drie delen, te raadplegen hier:

* [Tinkercad handleiding 1]({{site.baseurl}}/Tinkercad-handleiding-01/)
* [Tinkercad handleiding 2]({{site.baseurl}}/Tinkercad-handleiding-02/)
* [Tinkercad handleiding 3]({{site.baseurl}}//Tinkercad-handleiding-03/)

![tinkercad]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint10.png)

#### Fusion 360 
[Fusion 360](http://fusion360.autodesk.com) is een technisch tekenprogramma dat gebruikt wordt om complexere stukken te ontwerpen die technisch correct moeten zijn. Het is een uitstekend programma om onderdelen te maken voor bepaalde ontwerpen. Het leerproces van dit programma vergt aanzienlijk meer tijd dan bij tinkercad maar de mogelijkheden zijn ook veel  uitgebreider. 

Fusion 360  is een volwaardig CAD programma, ideaal voor meer geavanceerde tekeningen in 3D en maatwerk voor op de lasercutter. Een handleiding in het Nederlands is beschikbaar op [cadstunter](https://autocad.cadstunter.nl/)

In [dit mooi filmpje](https://youtu.be/ouvf-4wciak) wordt heel kort, maar duidelijk, de basisprincipes van 3D-tekenen gedemonstreerd aan de hand van Fusion 360.

![fusion]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint11.png)

#### Meshmixer 
Meshmixer is een state of the art software die werkt met driehoekige meshes. Het is een ideaal programma voor het schoonmaken van 3D scans en kent op dit vlak geen gelijken. 
Volledig gratis af te halen hier [www.meshmixer.com](http://www.meshmixer.com/). 
 
Enkele kenmerken: 

* software van Autodesk
* analyse- en reparatiegereedschappen
* sculpting
* mogelijkheid om 3D-modellen te bewerken
* tekengereedschap aanwezig
* objecten kunnen voorzien worden van patronen en structuren
* mogelijkheid om supportmaterialen aan te brengen
* mogelijheid om te bewaren als afbeeldingen (met o.a. diverse shaders)

Er zijn talloze handleidingen terug te vinden, hier enkel links: 

* [weareprintlab.com](https://weareprintlab.com/blog/10-steps-to-getting-started-with-meshmixer-for-3d-printing)
* [all3dp.com](https://all3dp.com/meshmixer-tutorial/)
* [formlabs.com](https://formlabs.com/eu/blog/meshmixer-tutorial-tips-to-edit-stl-files-for-3d-printing/) 

![meshmixer]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint12.png)

#### Onshape 
[Onshape](https://www.onshape.com/) is een webgebaseerd programma waarvoor je geen zware laptop nodig hebt om het te kunnen gebruiken. 

Het heeft veel gelijkenissen met Fusion 360 maar met minder functies. Dit maakt het iets eenvoudiger in gebruik. Het grootste voordeel is dat je het op gelijk welke pc kan gebruiken en geen installatie nodig hebt. 

## 3D files tekenen. 

Tijdens het ontwerp van 3D files zijn er een aantal zaken waarmee er rekening moeten gehouden worden. Er wordt vaak gezegd dat alles kan geprint worden als je het kan tekenen. Dit is in zekere zin waar maar er zijn beperkingen. Zeker bij het gebruik van een FDM printer zijn er ontwerpregels die moeten in acht genomen worden. 

### Overhanging. 
FDM printen is een opbouwende techniek waarbij een nieuwe laag wordt gelegd op de laag eronder. Hierdoor moet er altijd contact zijn tussen de twee lagen. Als het contact te klein is zullen er problemen ontstaan. Dit komt het vaakst voor als men steile hoeken wil printen. De regel die men hier moet onthouden is dat de hoek nooit groter is dan 45 graden. (We nemen bij voorkeur 30 graden)

![Overhanging]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint13.png)

### Overbrugging 
Een overbrugging gebeurt tussen 2 punten. De printer is in staat om deze te verbinden zonder dat deze laag ondersteund is. Hou er rekening mee dat hoe groter de opening tussen de twee punten is hoe meer deze laag zal doorhangen en hoe slechter het eindresultaat zal zijn. 

![Overbrugging]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint14.png)

![Overbrugging]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint15.png)

### Ondersteuning 
Indien de overhangende hoek te groot wordt of de afstand bij een overbrugging te veel is kan men ondersteuning gaan toevoegen. Hierbij zal de printer de zwevende onderdelen gaan ondersteunen door er een constructie onder te printen. Deze ondersteuning wordt berekend door de slice software dus hoef je niet zelf te tekenen. Dit brengt echter enkele nadelen met zich mee. De print duurt langer en verbruikt meer filament. Als de print klaar is moet deze ondersteuning afgebroken worden, hierdoor zal de nabewerking langer duren en ziet de print er vaak minder goed uit. 

![Ondersteuning]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint16.png)

We proberen er altijd voor te zorgen dat we zo weinig mogelijk met ondersteuning moeten gaan printen. Dit begint bij de ontwerpfase, hier moet al nagedacht worden over de printbaarheid van je file. 


<div class="border_boxmaakbib03_img" markdown="1">
#### YHT-regel
Een vuistregel om met het hierboven besproken rekening te houden en andere kleinheden is de zogenaamde YHT-regel.

Omdat het kunststof is dat vloeibaar uit de de printkop komt, zakt het naar beneden als er niks onder ligt om het kunststof op te printen (denk aan een spuitzak voor slagroom). 
Vraag jezelf het volgende als je iets getekend hebt: Zou je model blijven staan als het gemaakt is van zand? Indien ja, dan is het waarschijnlijk goed te printen. Anders ga je moeten ingrijpen. 

Om bepaalde lastigere eigenschappen toch te kunnen printen zijn er 3 mogelijkheden. Daarvoor maken we gebruik van de **YHT-regel**, welke zijn naam krijgt omwille van de vorm van de letters Y, H en T.

![YHT regel]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint17.png)

`Y`: Oppervlaktes die onder een hoek staan van 0° tot 45º (gezien vanaf een verticale lijn), kunnen zonder ondersteuning geprint worden.

`H`: Horizontale eigenschappen die hoger dan de onderkant van het 3D model liggen én die geklemd zijn tussen twee andere delen, kunnen geprint worden zonder ondersteuningsmateriaal. Dit kan tot een overbrugging van 50mm. Dit wordt *bridging* genoemd.

`T`: We gebruiken zogenoemd *support* materiaal om overhangende geometrie te printen. Een soort steiger die later weer wordt verwijderd. Dit geeft helaas altijd lichte afdrukken op de print. Mocht dit ongewenst zijn, probeer alle hoeken in het model als een Y te ontwerpen. We gebruiken support materiaal wanneer:

* Horizontale tweezijdig ingeklemde overbruggingen groter zijn dan 50mm,
* Oppervlaktes die onder een hoek staan van 45º tot 90° (gezien vanaf een verticale lijn),
* Horizontale eigenschappen die aan één kant zijn ingeklemd.

</div>

## Files klaarmaken om te printen. 

Als de files klaar zijn om te printen , moeten deze geïmporteerd worden in het slice programma. In dit programma worden alle parameters juist gezet ( snelheid , laagdikte , temperatuur ,...). Deze parameters zijn voor elke printer anders dus worden hier nu niet besproken. Er zijn een aantal zaken waar we moeten op letten. 

### Oriëntatie van je file 

De manier waarop je file georiënteerd is op het printbed  kan veel problemen voorkomen. Door je file te gaan heroriënteren kan het gebruik van ondersteuning vermeden worden.  

![Oriëntatie]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint18.png)
![Oriëntatie]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint19.png)

Zet ook altijd de print met de brede basis naar beneden. Dit zorgt voor een betere hechting met het printbed en minder kans op loskomen.  

![Oriëntatie]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint20.png)

De manier waarop de lagen liggen heeft ook te maken met de sterkte van je geprint stuk. In de volgende illustratie creëer je links een ‘zwak’ hoekpunt, terwijl rechts dat probleem opgelost door het stuk op een andere positie te printen. 

![Oriëntatie]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint21.png)

###  Printbed adhesion 

Het zal af en toe gebeuren dat je print loskomt van het printbed. Dit heeft te maken met de krimp van het materiaal tijdens het afkoelen. Er bestaan een aantal hulpmiddelen die dit probleem kunnen verhelpen.

**Raft**

Een raft is een tijdelijk oppervlakte dat ervoor zorgt dat de print blijft kleven op het printbed. Dit is een laagje dat onder de print wordt geprint. Dit kan automatisch gegenereerd worden in de slicing software. Als de print klaar is moet dit laagje afgepeld worden.

![Raft]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint22.png)

**Brim**

Een brim lijkt op het eerste zicht heel hard op een raft. Het grote verschil is dat het een dunnere laag is die rond je model geprint wordt in plaats van onder je model. 

![Brim]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint23.png)

**Schildersplakband op je bed kleven**

Dit helpt vaak bij bepaalde plasticsoorten die niet goed hechten aan het printbed. 

**Lijmstick**

Dit kan een hulp zijn bij sommige DIY printers. Let hierbij zeer goed op, het kan daardoor gebeuren dat de print te hard vastkleeft aan het printbed. Bij het lostrekken van de print is er gevaar dat de printer ontregeld geraakt en opnieuw gekalibreerd moet worden. Gebruik dit enkel als allerlaatste redmiddel.  

### Parameters instellen 
Een printer heeft verschillende parameters die aangepast kunnen worden voor het printen. Dit is grotendeels afhankelijk van het materiaal waarmee je zal printen. Het is aan te raden 1 materiaal te kiezen waarmee er geprint zal worden en daarvoor de ideale parameters te zoeken. Hieronder de belangrijkste parameters die te onderzoeken vallen. 

**Laaghoogte**

Dit spreekt voor zich, dit is de hoogte van de laagjes die op elkaar gelegd worden. Het is zeer duidelijk zichtbaar als deze waardes veranderd worden. Voor prints die er clean moeten uitzien kan men een laaghoogte van 0.1mm gebruiken, het nadeel van een dunne laag hoogte is dat de print lang kan duren. In de klas of met een groep is het aan te raden om de laaghoogte op 0.25 tot 0.3mm te zetten.  

![Laaghoogte]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint24.png) 

**Temperatuur**

Dit is materiaalafhankelijk. Iedere type kunststof heeft zijn eigen temperatuur waarbij het smelt. Bekijk de technische fiche van elk nieuw materiaal dat gebruikt wordt. Dit staat in de meeste gevallen op de verpakking van de kunststof. 

**Vulling**

De vulling of infill is afhankelijk van het doel van je print stuk. De prints die gemaakt worden met een 3D-printen zijn geen massieve blok kunststof. De binnenkant bestaat uit een gatenpatroon. Dit zorgt ervoor dat de prints geen uren duren maar toch stevig genoeg zijn. Indien het stuk een functioneel doel heeft kan de invulling hoger gezet worden waardoor het steviger wordt. 

![Vulling]({{site.baseurl}}/assets/wistjedat/DYK-3D-printen/3dprint25.png)

## Nuttige links

1. Handleidingen
    * Toolcard 3D-printen: [bit.ly/toolcard_3Dprinten](http://bit.ly/toolcard_3Dprinten)
    * 3D-ontwerpen met tinkercad: [bit.ly/tinkercad_tutorial](http://bit.ly/tinkercad_tutorial)
2. Inspiratie fiches 
    * [bit.ly/koelkast_magnete](http://bit.ly/koelkast_magnete)
    * [bit.ly/rietjes_connector](http://bit.ly/rietjes_connector)
3. Info 3D-technieken: [www.fablabplus.be/3d-printen/](http://www.fablabplus.be/3d-printen/)
4. Belgisch netwerk 3d-printen en 3d: [onderwijs.flam3d.be](https://onderwijs.flam3d.be/)
5. Ideeën voor lessen: 
    * [weareprintlab.com](https://weareprintlab.com/)
    * [leerkrachten.kunstcentraal.nl/lesmateriaal/doodle3dlab/](https://leerkrachten.kunstcentraal.nl/lesmateriaal/doodle3dlab/)
