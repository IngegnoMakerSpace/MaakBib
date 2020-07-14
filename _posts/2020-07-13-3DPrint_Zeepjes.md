---
layout: post
title:  "Giet je eigen zeepjes"
featured: false
published: true
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
image: assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG51.png
tijd: 2 dagen
print: assets/images/2020-07-13-3DPrint_Zeepjes/Zeepjes maken.pdf  
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-07-13-3DPrint_Zeepjes/Zeepjes maken.pdf
  - name: 'STL Bestanden'
    file: assets/images/2020-07-13-3DPrint_Zeepjes/stl
  - name: 'IGS Bestanden'
    file: assets/images/2020-07-13-3DPrint_Zeepjes/iges
  - name: 'STEP Bestanden'
    file: assets/images/2020-07-13-3DPrint_Zeepjes/step
  - name: 'SLDR Bestanden'
    file: assets/images/2020-07-13-3DPrint_Zeepjes/sldr
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
    Breekmes,
      ]
benodigdheden_opt: [
      Schuurpapier,
      Wattenstaafjes,
      Isopropyl alcohol,
      Verpakking,
      ]
---
Ontwerp je eigen zeepvorm en giet hier een mal van om je eigen zeepjes te maken!

In dit project wordt uitgelegd hoe je zelf gepersonaliseerde zeepjes kan maken. 
We starten met het 3D-printen van een door de maker ontworpen vorm. Vanuit deze vorm gaan we over tot het maken van een siliconen mal. Eens de siliconen mallen klaar zijn, kan er overgegaan worden naar het maken van de zeepjes, het smelten en het toevoegen van geuradditieven en kleurstoffen. Eens de zeep voldoende vloeibaar is, wordt overgegaan tot het gieten in de siliconen mallen.

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
Vervolgens vormen we in fase B de 3D-geprinte mal om naar een siliconen mal.
Tenslotte in fase C smelten en gieten we de zeep in de silionemal.

We werken in deze handleiding met een vogeltje als voorbeeld, maar je mag zelf natuurlijk je eigen vorm kiezen.

## Fase A: Ontwerp je 3D-geprinte mal
In deze fase gaan we ervan uit dat je reeds ervaring hebt met een tekenprogramma naar keuze, bevoorbeeld [Tinkercad]({{ site.baseurl }}/Tinkercad-handleiding-01/). Hier focussen we op de nodige regeltjes om een goede mal te bekomen.

Na de eerste vier stappen heb je het ontwerp van je zeepje. De mal ontwerp je in de laatste zes stappen.

![A0]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/3D mal + VIDEO/3D-mal.png)

#### Stap 1: Teken je vorm
Open je gekozen tekenprogramma en ontwerp hierin de vorm van je zeepjes.
In de meeste programma's kan je afbeeldingen van het internet laten overtrekken, zie bv voor Inkscape onze [activiteit sleutelhanger maken]({{ site.baseurl }}/sleutelhanger-maken-met-inkscape/). 
Als je Fusion 360 gebruikt, kan je dit <a href="https://www.youtube.com/watch?v=twgAwrnEVNw">filmpje</a> bekijken.

![A1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG1.png)

#### Stap 2: Geef je tekening volume
Om van je 2D plaatje naar een 3D vorm te gaan hebben we een aantal richtlijnen. 
Zorg ervoor dat je vormpje een dikte heeft van 15mm. Details moeten een minimale dikte van 2mm hebben om zichtbaar te zijn. 

![A2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG2.png)

#### Stap 3: Voeg tekst toe
Je kan je vormpje personaliseren door er een tekstje op te plaatsen. 
Je kiest voor je font het best Arial Rounded MT met een minimale grootte van 38. De tekst op het zeepje zal er precies uitzien zoals de tekst op je scherm. Je moet dus je tekst niet spiegelen.
Je geeft je letters ook een dikte. Zorg ervoor dat ze ook minstens 2mm dik zijn. 

![A3]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG5.png)

#### Stap 4: Verstevig je model
We willen dat ons zeepje niet snel breekt en ook gemakkelijk uit de mal komt. Daarvoor moeten we scherpe hoeken vermijden. Hiervoor gebruik je afrondingen en afschuiningen. Afrondingen op de basis vorm hebben een minimale straal van 2mm. 
![A4.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG7.png)

Op de details passen we de afrondingen toe met een straal van minstens 0.60mm. 

![A4.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG6.png)

#### Stap 5: Teken de omkasting
Nu de vorm van het zeepje af is, kunnen we beginnen aan de omkasting van de mal. Herhaal hiervoor Stap 1 zodat je de tekening van de zeepvorm weer hebt.

Teken vervolgens rond de vorm een willekeurige rand. Dit wordt later de vorm van je mal. De rand moet overal minstens 5mm van de vorm verwijderd zijn. Als je rand te dicht is, gaat de siliconen mal minder stijf zijn. Als je rand te ver is, heb je meer silicone nodig.

Maak van de rand een offset van 2mm. Dit wordt de wand van je omkasting.

![A5]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG8.png)

#### Stap 6: Maak de omkasting
Geef de omkasting een minimale hoogte van 20mm. Aangezien onze vorm 15mm hoog is, houden we 5mm over. Dit is precies voldoende voor de siliconen mal. 
Het onderste vlak moet minimaal 1.50mm dik zijn. 

![A6.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG9.png)

Om de stevigheid van de mal te verhogen, passen we een afronding me een straal an 4mm toe aan de binnste rand.

![A6.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG10.png)

#### Stap 7: Maak de staafjes
We moeten ervoor zorgen dat de vorm op zijn plek blijft terwijl we de silicone in de omkasting gieten. Daarom tekenen we ook een paar staafjes die we nadien aan de vorm kunnen bevestigen. Hieronder zie je de details van de staafjes.

![A7.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG13.png)
![A7.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG14.png)

De staafjes zorgen er ook voor dat de siliconen mal voldoende dikte heeft.

![A7.3]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG12.png)

#### Stap 8: Tijd om te printen
Nu is het tijd om alles af te drukken met de 3D-printer. Hieronder staan een reeks instellingen waarmee je mogelijks meer succes hebt om een goede kwaliteit mal te bekomen.

* Materiaal: PLA
* Brim: Ja
* Supports: Neen
* Resolutie: 0.15mm
* Vulling: 40% 
* Vulpatroon: Tri-hexagonaal
* Aantal Wandlijnen: 4
* Printsnelheid: 50mm/s
* Printtemperatuur: 200°C
* Platformtemperatuur: 60°C

Als je meerdere zeepjes tegelijkertijd wil maken, kan je best meerdere vormpjes, staafjes en omkastingen maken. Met 1 mal kan je om de 15 minuten 1 zeepje maken.

#### Stap 9: Zacht zeepje
Om een zacht zeepje te bekomen, moeten we de vorm opschuren met schuurpapier. Hoe groter de korrel van je schuurpapier, hoe gladder je zeepje uiteindelijk zal zijn. Start met een schuurpapier met korrel 800 ga zo geleidelijk aan hoger tot een korrel van 1500.

#### Stap 10: Finaliseer de 3D-geprinte mal
Om over te gaan naar fase B moeten we enkel de 3D-geprinte mal nog assembleren. Hiervoor positioneer je de vorm zodat er overal ongeveer evenveel plaats is. Boor vervolgens per staafje minimaal 2 gaatjes (2mm) en schroef er telkens een schroefje van M3x8 in. Je kan in plaats van schroefjes ook secondelijm gebruiken.

Let op: Maak de staafjes enkel vast aan de vorm en niet aan de omkasting!

Je resultaat zou er ongeveer zo moeten uitzien:

![A10]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG17.png)

#### Bestanden van het voorbeeld
Hier kan je de verschillende soorten bestanden van het voorbeeld ontwerp en de bijbehorende mal terugvinden: 

* STL bestanden van [het ontwerp]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/stl/Zeepvorm.STL) en <a href="{{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/stl/Omkasting.STL">de mal</a>
* IGS bestanden van <a href="{{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/iges/Zeepvorm.IGS">het ontwerp</a> en <a href="{{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/iges/Omkasting.IGS">de mal</a>
* STEP bestanden van <a href="{{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/step/Zeepvorm.STEP">het ontwerp</a> en <a href="{{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/step/Omkasting.STEP">de mal</a>
* SLDR bestanden van <a href="{{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/sldr/Zeepvorm.SLDPRT">het ontwerp</a> en <a href="{{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/sldr/Omkasting.SLDPRT">de mal</a>


## Fase B: Giet de siliconen mal
In deze fase gaan we van onze 3D-geprinte mal over naar een siliconen mal. Hiervoor gaan we gebruik maken van de A en B-component van de silicone, maatbeker en lepels.

![B0]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG35.png)

#### Stap 1: Meng de silicone
Open de A-component met een schroevendraaier.

![B1.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG23.png)

Neem hieruit vijf volle soeplepels (75ml) en doe deze in de maatbeker.

![B1.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG25.png)

Sluit vervolgens de A-component goed af met een hamer zodat er de pot luchtdicht is.

![B1.3]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG33.png)

Open de B-component, neem hieruit een halve dessertlepel (5ml) en voeg deze toe bij de maatbeker.

![B1.4]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG26.png)

Meng de twee goed onder elkaar.

#### Stap 2: Giet de silicone in de 3D-geprinte mal
Giet een deel van de silicone in de omkasting van de mal.

![B2.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG30.png)

Plaats nu de vorm met de staafjes op de omkasting. Zorg ervoor dat deze zo goed mogelijk in het midden staat. Hierdoor kan er voldoende silicone langs de zijkanten naar boven komen. Als de silicone niet hoog genoeg komt, voeg je extra silicone toe langs de randen.

![B2.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG31.png)

Plaats op deze constructie een gewicht, bijvoorbeeld een bokaal met water. Tik vervolgens langs de zijkant van de omkasting met een schroevendraaier om eventuele luchtbellen te laten ontsnappen.

![B2.3]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG36.png)

Laat deze opstelling **24u rusten** zodat de silicone kan uitharden.

#### Stap 3: Maak de siliconen mal vrij
Neem een breekmes en maak de siliconen mal vrij. 

![B3.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG34.png)

Je heb nu je eigen siliconen mal gemaakt! Op naar de volgende fase.

![B3.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG35.png)

## Fase C: Maak de zeepjes
In deze laatste fase gaan we onze siliconen mal gebruiken om de zeep vorm te geven.

![C0]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG49.png)

#### Stap 1: Stel de au bain marie op
Om de zeep te smelten, maken we gebruik van een au bain marie. Dit kan je opstellen door twee potten (een grote en een kleine) in elkaar te schuiven. 

![C1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG52.jpg)

Vul de onderste pot met water totdat het water tot in de helft van de bovenste pot komt. Er mag dus meer water in dan in de schets hierboven.
Verwarm vervolgens het water tot een temperatuur van ongeveer 75°C. Als het water te warm wordt, zal er lucht in de zeep ontstaan.

#### Stap 2: Smelt de zeep
Snij kleine en fijne stukjes zeep af tot je ongeveer 100 gram hebt. 100 gram zou voldoende moeten zijn voor 4 zeepjes, maar dit is afhankelijk van je vorm natuurlijk. Smelt deze dan in de au bain marie.

#### Stap 3: Voeg kleur en geur toe
Als je zeep goed vloeibaar is, is het tijd om kleur- en geurstoffen toe te voegen. 

Omdat de kleurstof geconcentreerd is, begin je best met maar een klein druppeltje. Vervolgens meng je het en breng je het verder op kleur.

![C3]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG42.png)

Een paar druppels geurstof volstaat voor onze zeepjes. Te veel geurstof laat de zeep zweten.

<div class="border_boxmaakbib01_img" markdown="1">
#### Wist je dat zeep ook kan "zweten"?
 Soms kan het zijn dat je op het oppervlak van je zeep druppels ziet. Dit kan op twee manieren gebeuren. 
 
 Enerzijds kan er water op je zeep condenseren. Hierbij komt het vocht van de druppels van buitenaf op je zeep terecht.
 
 Anderzijds kan het ook zijn dat je zeep aan het "zweten" is. Dan komt het vocht vanuit je zeep naar het oppervlak! Je wil zoveel mogelijk voorkomen dat je zeep zweet omdat je zeep daardoor sneller kleiner wordt. In ons project voorkomen we dit probleem door ervoor te zorgen dat we niet te veel geurstof toevoegen.
 
 Als je zeep begint te zweten, kan je het met keukenpapier deppen en even wegleggen. Hierdoor zal het vanzelf stoppen met zweten.

</div>

#### Stap 4: Giet de zeep in de siliconen mal
Eenmaal alles goed gemengd is, kunnen we de zeep in de siliconen mal gieten. 

![C4]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG44.png)

Laat elk zeepje 15 minuten uitharden.

#### Stap 5: Maak de zeepjes vrij
Na 15 minuten wachten kan je de zeepjes uit de mal halen. 

![C5.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG45.png)

Hiervoor raden we je aan om eerst de siliconen mal uit de omkasting te halen. 

![C5.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG46.png)

Nu kan je de zeepjes makkelijker vrijmaken door eerst de zijkanten van de siliconen mal open te trekken. 

![C5.3]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG47.png)

Nadien draai je de mal om en duw je op verschillende plekken om je zeepvormpjes eruit te krijgen.

![C5.4]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG48.png)

Nu ben je klaar en heb je je zelfgemaakte zeepjes!

#### Stap 6: Finale afwerkingen
Je kan met een wattenstaafje en isopropyl alcohol eventuele foutjes bijwerken. Opgelet, wees hier wel **zeer voorzichtig mee**. Je zet hiervoor **een veiligheidsbril op**. 

![C6.1]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG57.png)

Je kan je zeepjes ook in een leuke verpakking steken.

![C6.2]({{ site.baseurl }}/assets/images/2020-07-13-3DPrint_Zeepjes/fotos/FIG51.png)

#### Maak je eigen zeep
Als je geïnteresseerd bent in chemie, kan je ook je eigen zeep maken met palmolie, olijfolie, natriumhydroxide en keukenzout. Je kan dat doen aan de hand van <a href="https://www.youtube.com/watch?v=UNCm60q_1Hk">dit filmpje</a>.

## Weetjes over zeep
<div class="border_boxmaakbib01_img" markdown="1">
#### Weetjes
* **`Hoe lang bestaat zeep al?`**  
 Zeep wordt al minstens 4800 jaar gebruikt! Zelfs in de tijd van de Oude Egyptenaren gebruikten ze een middel dat op de hedendaagse zeep lijkt.
 
* **`Waar komt de naam "zeep" vandaan?`**  
 Volgens een oude Romeinse legende komt de naam voor zeep van de fictieve berg Sapo. Daarbij zouden de Romeinse plattelandsvrouwen zeep per toeval ontdekt hebben. De klei van de oevers van de Tiber was vermengd met dierlijk vet en as; dit hielp hen bij het wassen van hun kleding. 
 
</div>


