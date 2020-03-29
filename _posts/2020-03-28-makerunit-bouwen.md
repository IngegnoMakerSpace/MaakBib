---
layout: post
title:  "Je eigen MakerUnit bouwen"
featured: false
authors: [amy]
lowtech: false
midtech: true
hightech: true
DIT: true
DIY: true
CHALLENGE: false
pijler_tinkering : true
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : false
categories: [ CNC,  ]
image: assets/images/2020-03-28-makerunit-bouwen/makerunit_01.png
imgdir: /assets/images/2020-03-28-makerunit-bouwen/
tijd: 60 min
print: 
downloads:
video_front: K8Ww8VMCjpY
benodigdheden:  [
  Unit1-multiplex plaat 250x122x1.2cm,
  Unit1-decoupeerzaag,
  Unit1-bovenfrees,
  Unit1-inslagmoeren (planken vastzetten),
  Unit2-1.5 x multiplex plaat,
  Unit2-CNC frees (115cmx75cm),
  Unit2-draadstangen (planken erop),
  schuurpapier,
  4 wielen met rem (hoge KG),
  boormachine,
  vijzen,
  houtlijm,
]

---

Heb je thuis een (klein) atelier en zoek je een oplossing om zowel opslag als werkruimte te combineren? Dan is dit misschien wel de oplossing: een `MakerUnit`. 

De MakerUnit 1 is gebaseerd op de afmetingen van een kind (hoogte) en de [Really Usefull Boxes](http://www.reallyusefulproducts.co.uk/belgium_d/). Voor de 2de versie van de MakerUnit hielden we ook rekening met [Samla Ikea dozen](https://www.ikea.com/be/nl/cat/samla-serie-12553/), alsook extra opbergruimte voor kleinere dozen aan de achterkant ipv een geperforeerde plaat voor tools. Je kan de Units aanpassen en remixen naar je eigen noden.


## Benodigdheden

{% include benodigdheden.html %}

## Stappenplan MakerUnit Versie 2
Deze makerunit is een verbeterde versie van Unit 1 die we onderaan deze handleiding bespreken. Extra documentatie:

* [Fab Academy blog](http://fab.academany.org/2019/labs/ulb/students/amy-beaulisch/blogs/mar06.html#Title4) van het design proces van deze Unit
* Onshape [CAD files](https://cad.onshape.com/documents/8e97e3bbd8f0499216a5c98f/w/b7c18650016cb66f6c6910ac/e/b9f07822b5c1cfc3295b3d45) van de unit

### Stap 1: Snij de platen op een handelbare grootte 
Als je voor transport de plaat laat voorsnijden in de doe het zelf winkel, zal je wat materiaal verliezen en dus een extra halve plaat nodig hebben.

Voor de platen, zie de [CAD files in Onshape](https://cad.onshape.com/documents/8e97e3bbd8f0499216a5c98f/w/b7c18650016cb66f6c6910ac/e/b9f07822b5c1cfc3295b3d45)

![unit 2]({{ site.baseurl }}{{ page.imgdir }}makerunit_11.png)

Download de technische specificaties per plank, bv de bovenplank:

![unit 2]({{ site.baseurl }}{{ page.imgdir }}makerunit_12.png)


### Laad de CAD tekening in in het CAM programma. 

* Laat de CNC router je platen versnijden. Hierbij ook in de binnenplaat de delen weghalen zodat een kruis kan gemaakt worden met de binnenplaten. De uitsparingen maken het mogelijk dat de grote binnenplaat en de kleine binnenplaat in elkaar  glijden.
![unit 1 kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_13.jpg)
* In de top en bodem platen moeten verschillende delen weggehaald worden. Zo moet er in de boven en onderplaat materiaal weggefreesd worden waar de rechtopstaande stukken die je binnen kruis vormen zullen invallen. Deze lijnen dienen als stevigheid van de constructie maar ook als hulplijnen waar het kruis moet komen. Gebruik hiervoor ook de CNC om minstens 2 mm materiaal weg te frezen.  
![unit 1 kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_14.jpg)
* Boor de gaatjes voor om later gemakkelijker te kunnen assembleren. Beslis op welke hoogte de planken moeten komen en boor gaatjes voor waarin de draadstang kan geschoven worden.  
* Boor de gaatjes voor om de wielen te kunnen plaatsen.  
![unit 1 wielen]({{ site.baseurl }}{{ page.imgdir }}makerunit_15.png)
* Vergeet de uitsparing niet om de latjes door te schuiven die het uitklaptafeltje gaan ondersteunen. 
* Schuur alles zachtjes af na het frezen. 

### Vijs de wielen aan de onder plaat
Maak, voor je begint aan assemblage  de wielen vast aan de onderste plaat. Vergeet in de volgende stappen niet om de remmen op te zetten. 

### Assembleer de constructie
De wielen hangen al vast aan de onderkant van de bodemplank. Zet/klik een van de twee middelplaten op de bodemplank. Afhankelijk van het hout en de toleranties kan deze constructie op zichzelf recht blijven. Let echter op wanneer je het verplaatst. Enkele onzichtbare vijzen of deuvels zijn aangeraden. 

Let op: let op dat je het hout van de middelplaat niet splijt. Probeer daarom kleine gaatjes voor te boren. 

Voor de planken gebruik je draadstangen die je door de eenheid aanbrengt, en vastzet met moeren links en rechts. Een uitsparing in de planken maken met de CNC zodat ze goed blijven liggen.  
![unit 1 planken]({{ site.baseurl }}{{ page.imgdir }}makerunit_16.jpg)

### Afwerking

Plaats alle tools en dozen in de unit! Je unit is af!

![unit 1 afwreking]({{ site.baseurl }}{{ page.imgdir }}makerunit_17.png)

## Stappenplan MakerUnit Versie 1

Dit is de originele MakerUnit, welke met handtools gemaakt wordt, in plaats van met een CNC machine. Je kan de files aanpassen aan je eigen noden, zolang je het principe van de verdeling en opbouw maar behoudt.

### Stap 1: Snij de platen op de gewenste grootte. 

Je kan je plaat laten snijden in delen bij de doe het zelf winkel. De volgende platen zijn nodig:

* bodemplaat
* topplaat
* grote middelplaat
* kleine middelplaat
* plaat voor uitklaptafeltje
* stokken voor de ondersteuning van het uitklaptafeltje
* legplanken 

De technische fiche met de mogelijke afmetingen:

[![technische doc]({{ site.baseurl }}{{ page.imgdir }}makerunit_03.png)]({{ site.baseurl }}{{ page.imgdir }}MakerUnit01.pdf)

**Noot:** deze technische tekening is niet compleet, **controleer je afmetingen** of alles uitkomt voor je begint de plaat versnijden! Een upgedate tekening welkom.

### Gebruik de technische tekening voor kleinere details

* In de top en bodem platen moeten nog verschillende delen weggehaald worden. Zo moet er in de boven en onderplaat materiaal weggefreesd worden waar de rechtopstaande stukken die een kruis vormen zullen invallen. Deze lijnen dienen als stevigheid van de constructie maar ook als hulplijnen waar het kruis moet komen. Gebruik hiervoor een bovenfrees. Indien je kan, kun je hier ook al op enkele platen gaatjes voorboren zodat je straks gemakkelijker kan schroeven
![kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_06.png)
* Beslis op welke hoogte de planken moeten komen. Deze zullen later de dozen dragen. Gaatjes voorboren maakt de assemblage gemakkelijker. 
* Er moet gezaagd worden in de binnenplaten om het kruis te kunnen maken.
![kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_04.png) 
![kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_05.png)
* Voorboor ook de gaatjes voor de wielen 
![kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_07.png)
* Vergeet niet een  uitsparing te maken om de latjes door te schuiven die het tafeltje gaan ondersteunen. 
* Schuur alles zachtjes af na het zagen. 

### Vijs de wielen aan de onder plaat
Maak, voor je begint aan de volledige opbouw van de constructie de wielen vast aan de onderste plaat. Vergeet in de volgende stappen niet om de remmen op te zetten. 

### Assembleer de constructie
De volgende stap is om de constructie te assembleren.
De wielen hangen al vast aan de onderkant van de bodemplank. Zet/klik een van de twee middelplaten op de bodemplank. Schroef dit vast, lijm alleen is niet voldoende. 

Let op: let op dat je het hout van de middelplaat niet splijt. Probeer daarom kleine gaatjes voor te boren. 

Gebruik inslagmoeren om de planken vast te zetten. Boor gaten voor.
![kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_09.png) 
![kruis]({{ site.baseurl }}{{ page.imgdir }}makerunit_10.png)


### Afwerking

Plaats alle tools en dozen in de unit! 

![unit 1 af]({{ site.baseurl }}{{ page.imgdir }}makerunit_08.png)

