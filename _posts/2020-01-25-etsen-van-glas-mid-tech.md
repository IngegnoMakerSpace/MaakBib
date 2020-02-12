---
layout: post
title:  "Nutella Lamp: Etsen van glas - Mid Tech"
authors: [fien]
lowtech: false
midtech: true
hightech: false
DIT: true
DIY: false
CHALLENGE: false
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : false
categories: [ chemie, snijplotter, 2D-tekenen ]
image: assets/images/2020-01-25-etsen-van-glas-mid-tech/pot_etsen05.png
print: assets/images/2020-01-25-etsen-van-glas-low-tech/Handleiding_glas etsen.pdf
downloads:
  - name: 'Stappenplan glas etsen met etspasta'
    file: assets/images/2020-01-25-etsen-van-glas-low-tech/Handleiding_glas etsen.pdf
benodigdheden:  [
  Glazen voorwerpen van ongehard glas; we gebruiken een Nutella pot,
  Sticker vel,
  Snijplotter,
  Laptop met Inkscape (2d tekenen),
  Transfertape,
  Schilderstape,
  Alcohol of glasreiniger (optioneel),
  Etspasta,
  Rubberen of latex handschoenen,
  Spatels (bv. ijsstokje),
  Plastic placemat,
  Water en afwasmiddel (zonder citroen),
  Keukenpapier,
  Keukenhanddoek,
  tiltswitch,
  coincell batterij 3V en batterijhouder,
  Space tape (conductieve plakband) of geleidende draad,
  LED lampje
]
---

Ga aan de slag met glas ets om een __tilt-licht__ te maken voor in je kamer. Met glas ets creër je afbeeldingen op glazen voorwerpen van ongehard glas. Ideaal voor een leuk nachtlampje.

Glas etsen met etspasta is niet moeilijk maar je moet wel heel zorgvuldig te werk gaan want je werkt met een bijtend middeltje. 

Wist je dat de mogelijkheid om glas met zuur te etsen werd in 1670 bij toeval in Duitsland ontdekt? De kunst van het glas etsen bereikte vervolgens haar hoogtepunt in de negentiende en twintigste eeuw.

## Benodigdheden

{% include benodigdheden.html %}

## Maak je digitale glasets sjabloon

We maken eerst een sjabloon van de figuur die we op ons glas willen. We maken deze op de computer met het programma __Inkscape__.

Zie onze [Inkscape tool fiche]({{site.baseurl}}/tools/Inkscape ) om te leren hoe je met Inkscape figuren maakt die kunnen uitgesneden worden.

Geen tijd om een sjabloon te maken? Of inspiratie nodig? Download een van onze voorbeeld sjablonen of zoek een 2D svg file op internet geschikt voor een sjabloon (zoekterm: silhouette, sjabloon)

[Voorbeeld sjablonen]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/etsen_snijplotten.svg)

## Snij je digitale glasets sjabloon

Je tekening is klaar om uit te snijden. Laat deze op een snijplotter uitsnijden. Vraag het aan de lab verantwoordelijke, of volg [de handleiding voor de Brother Scan 'n cut snijplotter]({{ site.baseurl }}/tools/Brother_snijplotter)

Je sjabloon is klaar! __Was__ het __glas__ en plak het stickersjabloon op je Nutella pot.

![nutella pot]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/pot_etsen01.png)

## Fiche glas etsen
Je vindt een overzicht van de stappen en leuke weetjes in [deze handige fiche]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-low-tech/Handleiding_glas etsen.pdf).

Voor onze toepassing gebruiken we een glasbokaal.

Een overzicht:

1. trek rubber handschoenen aan
2. smeer de etspasta op het sjabloon in een dun laagje, zorg dat alles dat niet geetst moet worden goed bedekt is, bv schilderstape\
![nutella pot]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/pot_etsen02.png)
3. laat de etspasta 5 tot 10 minuten inwerken
4. schep met een spatel of een bankpasje de pasta eraf en doe deze terug in de pot\
![nutella pot]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/pot_etsen03.png)
5. verwijder de resten etspasta met doekjes of spoel het af met water\
![nutella pot]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/pot_etsen04.png)
6. verwijder het sjabloon en gooi dit weg in een plastic bak\
![nutella pot]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/pot_etsen05.png)
7. maak het glas weer schoon, spoel het af onder de kraan
8. Om er zeker van te zijn dat het glas helemaal schoon is kun je het nog in de vaatwasser doen voor gebruik.

De etssjablonen en de gebruikte doekjes zijn nu chemisch afval! Ga hier zorgvuldig mee om. Ruim alle materiaal op en bewaar de etspasta buiten het bereik van kinderen!

Je post is af, nu nog het circuit

![nutella pot]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/pot_etsen07.png)

## Licht circuit maken voor in je pot
Je pot is klaar, nu nog deze omtoveren in een lampje ingewerkt in het deksel.

Maak volgend circuit met een LED, 3V knoopbatterij, batterijhouder, draadjes en een tilt switch (kantelschakelaar):

![circuit 01]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/constructie_01.jpg)

Opgelet, de positieve pool van de LED moet je verbinden met de positieve pool van de batterij! Gebruik een LED die met een 3V batterij kan gebruikt worden, andere LED zullen een extra weerstand nodig hebben van 20 tot 50 Ohm!

<div class="border_boxmaakbib03_img" markdown="1">
#### Hoe werkt een tilt switch?

Een kantelschakelaar of _tilt switch_ laat ons toe de stroom te onderbreken of te laten vloeien afhankelijk van de positie van de switch. Kantelschakelaars zijn gemakkelijk te gebruiken omdat het mechanisme heel eenvoudig is. 

![circuit 01]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/tilt_scheme.gif)

Binnenin het buisje is een holte met een metalen balletje. In deze holte zal de bal de geleidende pool raken en de schakelaar inschakelen enkel als de zwaartekracht ervoor zorgt dat heb balletje tegen de pool rolt. 
Dit schema is van toepassing op de meeste type kantelschakelaars. Ook al hangt de gevoeligheid af van de lengte en materialen van de sensoren.
</div>

Snij nu een karton zodat het in het deksel van de Nutella pot past. Bevestig hierop je circuit zodat je licht hebt als het deksel op de grond ligt. In volgende figuur zie je de __onderkant__ van de LED (die nu __aan__ is).

![circuit 02]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/constructie_002.png)

De andere zijde van het karton (met LED nu __uit__ want kantelschakelaar is geroteerd):

![circuit 03]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/constructie_003.png)

Plaats nu het karton in het deksel:

![circuit 03]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/constructie_004.png)

Test je circuit, je deksel rechtop zou je lichtje aan moeten doen, omgekeerd uit. 

![circuit 03]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-mid-tech/constructie_05.jpg)

## Eindresultaat

Schroef je deksel op je pot, en bewonder je creatie!


## Voorbeelden
Heb je een foto van je glasversiering? Stuur hem ons!

![Voorbeeld Glas Etsen]({{ site.baseurl }}/assets/images/2020-01-25-etsen-van-glas-low-tech/glas_etsen.jpg)