---
layout: post
title:  "Mini USB-gevoede trilrobot!"
featured: false
published: true
authors: [guest]
lowtech: true
midtech: false
hightech: false
DIT: true
DIY: false
CHALLENGE: false
pijler_tinkering : true
pijler_design_thinking : false
pijler_digitale_fabricatie : false
pijler_physical_computing : false
licence: CCBY-NC-SA 
categories: [ solderen, tinkering ]
image: assets/images/2020-04-22_soldeerexperiment/step5.jpg
tijd: 30 min
print: assets/images/2020-04-22_soldeerexperiment/Herlaadbare Trilbot Soldeer Experiment.pdf  
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-04-22_soldeerexperiment/Herlaadbare Trilbot Soldeer Experiment.pdf
  - name: 'PCB productie files' 
    file: assets/images/2020-04-22_soldeerexperiment/MAAKBIB_BOT_00.zip
materialen: [
    Voltage regulator 2.5V low-dropout (LDO),
    Trilmotor 4x8m,
    Condensator 2.7V 1F (of groter),
    2-polige schuifschakelaar,
    printplaat,
      ]
tools: [
    Soldeerbout,
    Soldeersel,
    Kniptang,
      ]
---
Leer solderen op printplaat en maak een leuke trilrobot.  
Trilrobots of vibrorobots zijn leuke kleine robots die aangedreven worden door trilmotoren. 

In dit project maak je een trilrobot op basis van een gegeven pcb-ontwerp. Je robotje zal **geen batterij nodig hebben**, het wordt gevoed via een condensator die geladen wordt via USB.  

Je kan deze dan afwerken met zelfbedachte aankleding. Wat dacht je van een sumoworstelende bot die anderen uit de weg kan duwen? De keuze is aan jou!

*Deze handleiding werd ontwikkeld door **Wim Van Gool** voor Maakbib.*

## Benodigdheden

{% include benodigdheden.html %}

![componenten]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/Materiaal.jpg) 

Hier enkele links (2020) waar je de onderdelen kan aankopen. 

* [Vast voltage regulator 2.5V LDO](https://be.farnell.com/microchip/mcp1700-2502e-to/ic-ldo-250ma-2-5v-to-92-3/dp/1851939)
* [Trilmotor 4x8mm](https://www.aliexpress.com/item/32637843126.html)
* [Condensator 2.7V 1F (of groter)](https://www.aliexpress.com/item/32951191463.html)
* [2-polige schuifschakelaar](https://www.aliexpress.com/item/32759946188.html)
* printplaat - aanvragen via Maakbib of laten maken via de [Gerber design files]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/MAAKBIB_BOT_00.zip), of componenten uitzetten op een [prototype PCB printplaat]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/protoprintplaat.png)

Als je de keuze hebt, gebruik bij voorkeur een soldeerbout met een **punt van maximaal 1.5mm** breedte. Kies ook voor een **kleine kniptang** specifiek voor elektronica toepassingen.

Als je graag printplaten voor dit project wilt laten maken, kan je met de design files in downloads terecht bij printplaatfabrikanten zoals [AQC](https://www.aqcbv.com/nl/) / [Eurocircuits](https://www.eurocircuits.com/) / [JLCPCB](https://jlcpcb.com/) / [OSHPark](https://oshpark.com/) / [PCBWAY](https://www.pcbway.com/) / [SeeedStudio](https://www.seeedstudio.com/prototype-pcb-assembly.html) / …

## Aan de slag
Als je nog geen ervaring hebt met solderen, neem deze documenten door:

* [Solderen is simpel]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/Solderen is simpel_by_ Mitch Altman.pdf) 
* [Solderen in 4 stappen]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/4 stappen_solderen.pdf) 

Let op je veiligheid en draag **`ALTIJD`** een veiligheidsbril bij het solderen.  
Maak een staart in je haar als je lang haar hebt! 

#### Stap 1

Plaats de `2.5V LDO` en de `schakelaar` in de print en soldeer deze beide alvast zoals in de volgende figuur.

![stap1]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step1.png) 

#### Stap 2
Plaats `de motor` op de print. Hiervoor moet je voorzichtig de beentjes van de motor rechtbuigen.

![stap2]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step2a.jpg)

![stap2b]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step2b.jpg)

#### Stap 3
Plaats `de condensator`, let hierbij op de richting! 

![stap3]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/condensator.png)

De lange poot is de `+ pin`. Als je goed kijkt, zal je ook merken dat op het zwarte cilinder een grijze band met min tekens afgedrukt staat om de min pool aan te duiden. 

![stap3]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step3.png) 

Kijk nog eens goed na hoe de condensator zit voor je hem gaat solderen! Er staat een + op de printplaat waar de + pin moet komen.

#### Stap 4
Tijd om de lange pinnen in te korten!
![stap4a]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step4a.jpg)

**`Opgelet!`** Houd de pinnen tegen met je hand, anders vliegen ze weg!

![stap4a]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step4b.jpg)

Kijk goed na dat alles er proper uitziet en er geen kortsluitingen zijn.

![stap4c]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step4c.jpg)

#### Stap 5

Tijd om de trilrobot voor de eerste keer op te laden in een USB poort.

![stap5]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/step5.jpg)

Als hij onmiddellijk begint te trillen, moet je de schakelaar eerst in de **`uit`** stand zetten. 

#### Stap 6
Laat nu je fantasie vrij en tover deze printplaat om in een grappig robotje. 
Zo kan je hier een tandenborstel op vastkleven om zo een *bristlebot* te maken. 
Of kan je met dik papier of dun karton een model van [CubeeCraft](http://www.cubeecraft.com/) maken. 

Laat dan verschillende trilbots tegen elkaar racen.
## STEM 
In deze activiteit ga je de volgende talenten trainen: planmatig werken, nauwkeurig werken, veilig werken en handigheid. 

Als je dan de werking onderzoekt, ontdek je heel wat **wiskunde** en **natuurkunde**. 
#### Hoe werkt dit circuit?
De condensator van dit project ga je opladen via een USB-poort. Eens deze volledig vol is en je de schakelaar omklikt, zal deze de motor doen draaien en leeglopen.

De condensator dient om tijdelijk energie op te slaan. Net zoals de herlaadbare batterij van een gsm of laptop. 
We gebruiken hier een USB-poort om deze energie aan te leveren. Echter is deze spanning te hoog voor onze condensator, dus plaatsen we een voltage regulator LDO, een specifiek stukje elektronica die deze 5V van de USB-poort zal verlagen naar 2.5V. Hiermee kunnen we de condensator opladen tot een maximale spanning van 2.5V. Eens deze opgeladen is (dit is reeds na enkele seconden!) kan je de trilbot verwijderen uit de USB-poort en de schakelaar verzetten. Hierdoor sluit je het circuit en zal zo de trilmotor voeding krijgen van de condensor.

<div class="border_boxmaakbib02_img" markdown="1">
#### Hoe snel gaat zo een condensator nu leeg?
 
Het leeglopen van de condensator kan je berekenen door de tijdsconstante  (**tau: τ**) te bepalen. Deze tijdsconstante is gelijk aan het product van de weerstand van de verbruiker en de capaciteit van deze condensator. In het geval van een condensator van **1F** (**Farad**) en een weerstand van **1Ω (Ohm)** is dit gelijk aan **1s**.

**τ=R×C**

**R** is de weerstandswaarde en drukken we uit in **`Ohm`** wat afgekort wordt met de Griekse letter Omega: **Ω**

**C** is de capaciteitswaarde en drukken we uit in **`Farad`**. Typische waarden zijn echter **nF** (nano Farad, of 10<sup>-9</sup>F) en **µF** (micro Farad, of 10<sup>-6</sup>F = 0.000001 F).

Een condensator is volledig leeg na **5 τ** , of in ons voorbeeld, **5 x 1Ω x 1F = 5 seconden**. 
Maar dat wil niet zeggen dat de condensator na **4** seconden nog een hoge spanning heeft, met andere woorden, voor de condensator leeg is zal hij al niet meer genoeg spanning hebben om de motor te doen draaien. 

Als we de complexe rekenwijze erbij halen kunnen we uitrekenen hoeveel spanning er nog over de condensator staat te allen tijde van het ontlaadproces. De formule in kwestie is:

![formule]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/formuleVc.png)

Waarbij:

 * **V<sub>c</sub>** de spanning over de condensator is
 * **V<sub>s</sub>** de start spanning toen deze opgeladen was
 * **t** de verstreken tijd in seconden sinds het begin van het ontladen
 * **RC** of  de tijdsconstante
 * **_e_** is een constante, genoemd [de natuurlijke logaritme](https://nl.wikipedia.org/wiki/E_(wiskunde)), je kan het benaderen als *e*=2,718

Als we dit op een grafiek zetten krijgen we volgend verloop 

![formule]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/grafiek.png)

Als we dit dan even in een tabel gieten krijgen we volgende waarden:

![formule]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperiment/tabel.png)

De motor die we gebruiken werkt vanaf 1.5 V, dus 60% van onze spanning van 2.5 V, dus is de maximum tijd dat de motor werkt volgens bovenstaande tabel 0,5 τ. Verder is de weerstand R van de motor ongeveer 50 Ohm, terwijl de condensator die we gebruiken er een is van 1F. 

We besluiten dat de trilmotor 0,5 x 50 x 1 = 25 seconden moet werken!
</div>

#### Bronnen
Nuttige links als je meer wilt weten en onderzoeken. 

* [RC Discharging Circuit](https://www.electronics-tutorials.ws/rc/rc_2.html)
* [Time constant](https://en.wikipedia.org/wiki/Time_constant)
* [RC circuits](https://phys.libretexts.org/Bookshelves/University_Physics/Book%3A_University_Physics_(OpenStax)/Map%3A_University_Physics_II_-_Thermodynamics%2C_Electricity%2C_and_Magnetism_(OpenStax)/10%3A_Direct-Current_Circuits/10.06%3A_RC_Circuits)

