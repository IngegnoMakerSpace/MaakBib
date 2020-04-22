---
layout: post
title:  "Mini USB-gevoede trilrobot!"
featured: true
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
image: assets/images/2020-04-22_soldeerexperimet/step5.jpg
tijd: 30 min
print: assets/images/2020-04-22_soldeerexperimet/Herlaadbare Trilbot Soldeer Experiment.pdf  
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-04-22_soldeerexperimet/Herlaadbare Trilbot Soldeer Experiment.pdf
  - name: 'PCB productie files' 
    file: assets/images/2020-04-22_soldeerexperimet/MAAKBIB_BOT_00.zip
materialen: [
    Voltage regulator 2.5V LDO,
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
Leer solderen op printplaat en maak een leuk trilrobot.  

Trilrobots of vibrorobots zijn leuke kleine robots die aangedreven worden door trilmotoren. In dit project maak je er een op basis van een gegeven pcb-ontwerp. Je robotje zal geen batterij nodig hebben, het wordt gevoed via een condensator dat geladen wordt via USB.  

Je kan dan afwerken met zelfbedachte aankleiding. Wat dacht je van een sumoworstelende bot die anderen uit de weg kan duwen? De keuze is aan jou!

*Deze handleiding werd ontwikkeld door **Wim Van Gool** voor Maakbib.*

## Benodigdheden

{% include benodigdheden.html %}

![componenten]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/Materiaal.jpg) 

Hier moegelijke links om de onderdelen aan te kopen. 

* Fixed voltage regulator [2.5V LDO](https://be.farnell.com/microchip/mcp1700-2502e-to/ic-ldo-250ma-2-5v-to-92-3/dp/1851939)
* [Trilmotor 4x8mm](https://www.aliexpress.com/item/32637843126.html)
* [Condensator 2.7V 1F (of groter)](https://www.aliexpress.com/item/32951191463.html)
* [2-polige schuifschakelaar](https://www.aliexpress.com/item/32759946188.html)
* printplaat - aanvragen via Maakbib of laten maken via de [design files]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/2020-04-22_soldeerexperimet/)

Als je de keuze hebt, gebruik bij voorkeur een soldeerbout met een punt van maximaal 1.5mm breedte. Kies ook voor een kleine kniptang specifiek voor elektronica toepassingen.

Als je graag printplaten voor dit project wilt laten maken, kan je met de design files in downloads terecht bij bij printplaatfabrikanten zoals AQC / Eurocircuits / JLCPCB / PCBWAY / SeeedStudio / OSHPark / …

## Aan de slag
Als je nog geen ervaring hebt met solderen, neem deze documenten door:

* [Solderen is simpel]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/Solderen is simpel_by_ Mitch Altman.pdf) 
* [Solderen in 4 stappen]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/4 stappen_solderen.pdf) 

Let op je veiligheid en draag **`ALTIJD`** een veiligheidsbril bij het solderen.  
Maak een start in je haar als je lang haar hebt. 

#### Stap 1

Plaats de LDO en schakelaar in de print en soldeer deze alvast.

![stap1]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step1.png) 

#### Stap 2
Plaats de motor op de print. Hiervoor moet je voorzichtig de beentje rechtbuigen van de motor.

![stap2]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step2a.jpg)

![stap2b]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step2b.jpg)

#### Stap 3
Plaats de condensator, let hierbij op de richting! 

![stap3]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/condensator.png)

De lange poot is de + pin. Als je goed kijkt, zal je ook merken dat op het zwarte cilinder een grijze band met min tekens afgedrukt staat om de min pool aan te duiden. 

![stap3]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step3.png) 

Kijk nog eens goed na hoe de condensator zit voor je hem gaat solderen!

#### Stap 4
Tijd om de lange pinnen in te korten!
![stap4a]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step4a.jpg)

**`Opgelet!`** Houd de pinnen tegen met je hand, anders vliegen ze weg!

![stap4a]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step4b.jpg)

Kijk goed na dat alles er proper uitziet en er geen kortsluitingen zijn.

![stap4c]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step4c.jpg)

#### Stap 5

Tijd om de trilrobot voor de eerste keer op te laden in een USB poort.

![stap5]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/step5.jpg)

Als hij onmiddellijk begint te trillen, moet je de schakelaar eerst in de **`uit`** stand zetten. 

#### Stap 6
Laat nu je fantasie vrij en tover deze printplaat in een grappige robotje. 
Zo kan je hier een tandenborstel op vastkleven om zo een *bristlebot* te maken. 
Of kan je met dik papier of dun karton een model van [CubeeCraft](http://www.cubeecraft.com/) maken. 

Laat dan verschillende trilbots tegen elkaar racen.
## STEM 
In deze activiteit ga je de volgende talenten trainen: planmatig werken, nauwkeurig werken, veilig werken en handigheid. 

Als je dan de werking onderzoekt ontdek je heel wat **wiskunde** en **natuurkunde**. 
#### Hoe werkt dit circuit?
De condensator van dit project ga je opladen via een USB-poort. Eens deze volledig vol is en je de schakelaar omklikt, zal deze de motor doen draaien en leeglopen.

De condensator dient om tijdelijk energie op te slaan. Net zoals de herlaadbare batterij van een gsm of laptop. 
We gebruiken hier een USB-poort om deze energie aan te leveren. Echter is deze spanning te hoog voor onze condensator, dus plaatsen we een LDO, een specifiek stukje elektronica die deze 5V van de USB-poort zal verlagen naar 2.5V. Hiermee kunnen we de condensator opladen tot een maximale spanning van 2.5V. Eens deze opgeladen is (dit is reeds na enkele seconden!) kan je de trilbot verwijden uit de USB-poort en de schakelaar verzetten. Hierdoor sluit je het circuit en zal zo de trilmotor voeding krijgen van de condensor.

<div class="border_boxmaakbib02_img" markdown="1">
#### Hoe snel gaat zo een condensator nu leeg?
 
Het leeglopen van de condensator kan je berekenen door de tijdsconstante  (**tau**) te bepalen. Deze tijdsconstante is gelijk aan het product van de weerstand van de verbruiker en de capaciteit van deze condensator. In het geval van een condensator van **1F** (**Farad**) en een weerstand van **1Ω (Ohm)** is dit gelijk aan **1s**.

**τ=R×C**

**R** is de weerstandswaarde en drukken we uit in **`Ohm`** wat afgekort wordt met de griekse letter Omega: **Ω**

**C** is de capaciteitswaarde en drukken we uit in **`Farad`**. Typische waarden zijn echter **nF** (nano Farad, of 10-9F) en **µF** (micro Farad, of 10-6F)

Een condensator is volledig leeg na **5** , of in ons voorbeeld, **5x1Ωx1F = 5 seconden**. 
Maar dat wil niet zeggen dat de condensator na **4** seconden **nog** een hoge spanning heeft. 

Als we de complexe rekenwijze erbij halen kunnen we uitrekenen hoeveel spanning er nog over de condensator staat te allen tijde van het ontlaadproces. De formule in kwestie is:

![formule]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/formuleVc.png)

Waarbij:

 * **Vc** de spanning over de condensator is
 * **Vs** de start spanning toen deze opgeladen was
 * **t** de verstreken tijd in seconden sinds het begin van het ontladen
 * **RC** of  de tijdsconstante

Als we dit op een grafiek zetten krijgen we volgend verloop 

![formule]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/grafiek.png)

Als we dit dan even in een tabel gieten krijgen we volgende waarden:

![formule]({{ site.baseurl }}/assets/images/2020-04-22_soldeerexperimet/tabel.png)

</div>

#### Bronnen
Nuttige links als je meer wilt weten en onderzoeken. 

* [RC Discharging Circuit](https://www.electronics-tutorials.ws/rc/rc_2.html)
* [Time constant](https://en.wikipedia.org/wiki/Time_constant)
* [RC circuits](https://phys.libretexts.org/Bookshelves/University_Physics/Book%3A_University_Physics_(OpenStax)/Map%3A_University_Physics_II_-_Thermodynamics%2C_Electricity%2C_and_Magnetism_(OpenStax)/10%3A_Direct-Current_Circuits/10.06%3A_RC_Circuits)









