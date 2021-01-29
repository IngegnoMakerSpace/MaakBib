---
layout: post
title:  "Tafelrobot"
featured: false
published: true
authors: [guest]
author_name: "Yvon Masyn"
lowtech: false
midtech: true
hightech: false
DIT: true
DIY: false
CHALLENGE: false
moeilijkheidsgraad_1_3: 1
prijs_1_3: 2
pijler_tinkering : false
pijler_design_thinking : true
pijler_digitale_fabricatie : true
pijler_physical_computing : false
licence: CCBY-NC-SA
categories: [robotica, solderen, 3d-printen]
image: assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 0.jpg
tijd: 3u+
print: assets/downloads/2020-07-14-Tafelrobot/tafelrobot.docx.pdf
downloads: 
  - name: 'Handleiding'
    file: assets/downloads/2020-07-14-Tafelrobot/tafelrobot.docx.pdf
  - name: '3D Bestanden'
    file: assets/downloads/2020-07-14-Tafelrobot/tafelrobot.zip

materialen_dontshow: true
tools: [
    een 3D printer (niet getoond op de foto). Als je onderdelen in PET wilt printen heb je een printer met een verwarmd bed nodig.,
    een hamer(tje),
    een soldeerbout en soldeersel,
    "een smeltlijmpistool en een lijmstick, bij voorkeur van het lage temperatuur type, dat is veiliger",
    een schroevendraaier passend voor de schroeven,
    een mal die je ook 3D-print,
      ]
---

De tafelrobot rijdt rond op de tafel en draait weg voor ie van de rand rijdt. Dat alles zonder
elektronica of software ;-). De tafelrobot wordt gemaakt uit 3D-geprinte onderdelen
aangevuld met tandwielen, assen, schroeven, een motortje, aan/uit-schakelaar en een
batterij. De bouw vraagt wat eenvoudige soldeerverbindingen, samenschroeven en
nauwkeurig tunen van de hoogte aan de hand van de schroeven.

<p><iframe style="width:100%;" height="315" src="https://www.youtube.com/embed/EW5Oj5OZzFo?rel=0&amp;showinfo=0" frameborder="0" allowfullscreen></iframe></p>

*Deze handleiding werd ontwikkeld door **Yvon Masyn** voor Maakbib.*

## Benodigdheden

<p style="margin: 0 0 0 0;"><strong>Materialen:</strong></p>
60g 3D-print filament, PLA of PET. Voor de basis en het regelstuk is PET aanbevolen,
omdat het minder snel zal breken als de robot toch eens van de tafel valt. In de foto worden
het filament niet getoond, maar de 3D-geprinte onderdelen
<div class="benodigdheden">
  <ul>
    <li><a href="https://www.opitec.be/technische-toebehoren/aandrijving/motoren/motor-r-21-re-260.html?listtype=search&amp;searchparam=motor">een elektromotor</a> type R 21/ Re 260</li>
    <li><a href="https://www.opitec.be/sale/batterijhouder-aa-voor-1-penlite.html?listtype=search&amp;searchparam=oxartnum%3A207653">batterijhouder</a> voor 1 AA, bedraad</li>
    <li><a href="https://www.opitec.be/technische-toebehoren/bekabeling/schakelaars/micro-schuifschakelaars-10-stuks.html?listtype=search&amp;searchparam=micro%20schuifschakelaar">kleine schakelaar</a></li>
    <li><a href="https://www.opitec.be/technische-toebehoren/staaf-materialen/metalen-assen-afstandsbusjes-messing-hulzen/metalen-assen-3-x-70-mm-10-stuks.html?listtype=search&amp;searchparam=assen%203%2070">2 assen</a> 3mm diameter, 70mm lang</li>
    <li><a href="https://www.opitec.be/technische-toebehoren/aandrijving/toebehoren-------/wormwielen-10-stuks.html?listtype=search&amp;searchparam=wormwiel">wormwiel module</a> 1 passend op motor</li>
    <li><a href="https://www.google.com/url?q=https://www.opitec.be/technische-toebehoren/aandrijving/tandwielen/tandwielen-20-mm-18-tanden-10-stuks-nr.html%3Flisttype%3Dsearch%26amp%3Bsearchparam%3Doxartnum%253A840125&ust=1594806660000000&usg=AOvVaw31FJTTlW7w9YKD9vX4plth&hl=nl">2 tandwielen</a> module 1, 18 tanden, passend op de assen</li>
    <li><a href="https://www.ijzerwaar.be/Webwinkel-Product-9476930/houtschroef-din96-messing-3x25-200-stuks.html">4 schroeven met gedeeltelijke schroefdraad</a> type DIN95 of DIN 96 3mm diameter 25mm lang. Andere schroeven zijn mogelijk, maar het is best dat ze een voldoende lang glad gedeelte, zonder schroefdraad hebben.</li>
    <li><a href="https://www.ijzerwaar.be/Webwinkel-Product-9470639/schroefoog-hout-verzinkt-3.50x25x10-100-stuks.html">3 schroefogen</a> 3,5mm dikte, 25mm lang. Andere schroeven zijn mogelijk, maar schroefogen kunnen gemakkelijk met de hand bijgeregeld worden.</li>
    <li>een stuk van een te recycleren fietsband, ongeveer 2 cm breed. Een stuk van een dikke
    fietsband werkt gemakkelijker. Te recycleren fietsbanden kan je gratis afhalen bij de meeste
    fietsenmakers</li>
 </ul>
</div>
![Foto1]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 1.jpg)

{% include benodigdheden.html %}

![Foto2]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 2.jpg)

## Stap 1: 3D-printen van de onderdelen
Voor alle onderdelen en de mal is [een stl-bestand beschikbaar in het zip bestand]({{ site.baseurl }}/assets/downloads/2020-07-14-Tafelrobot/tafelrobot.zip). Van de kegelwielen en de
kleine wielen heb je per robot telkens twee exemplaren nodig, van alle andere onderdelen
één. De mal kan je hergebruiken en delen binnen een kleine groep.

De onderdelen worden geprint met een wanddikte van ongeveer 1mm en een vulling van
ongeveer 20%. De onderdelen kunnen normaal zonder ondersteuning (“support”) geprint
worden. Volg verder de handleiding van de slicer en van de 3D printer.

Print de onderdelen vooraf aan het bouwen, want het printen van alle onderdelen duurt
(afhankelijk van de printer) een 5-tal uur.

Vaak zijn er na het printen nog draadjes of oneffenheden aan de onderdelen, vooral bij PET.
Verwijderd die met wat schuurpapier of een mesje (voorzichtig!)

## Stap 2: Solderen
Soldeer de schakelaar aan het contactoogje van de motor dat met een cirkeltje (soms met een
+) gemarkeerd is. Zorg dat het middelste contact van de schakelaar contact maakt met de
motor. Eén van de andere contactjes mag ook contact maken. De rode draad van de
batterijhouder soldeer je aan het overblijvende contact van de schakelaar. De zwarte draad
soldeer je aan het overblijvende contactoogje van de motor.

![Foto3]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 3.jpg)

Omdat de draadjes gemakkelijk afbreken net naast de soldeerverbinding maken we ze ook
nog eens vast met smeltlijm. Let er op dat er geen lijm op de as van de motor komt.

![Foto4]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 4.jpg)

## Stap 3: Assen en wielen klaar maken
Hamer voorzichtig telkens één van de assen doorheen één van de tandwielen, zodanig dat
je aan één kant 2 cm van de as hebt. Je kan dat doen met de mal. Zo kan je hameren tot de
juiste maat.

![Foto5]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 5.jpg)

Hamer het grote wiel op het uitende van het lange deel van één van de assen. Dat doe je
steeds best met het wiel plat op de werktafel. Hamer een klein wiel op gelijk welk uiteinde
van de andere as.

![Foto6]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 6.jpg)

Leg het ander kleine wiel op de werktafel en hamer daarin het andere uiteinde van de as
waar al een klein wiel op zit. Wees voorzichtig dat je het eerste wiel niet stuk slaat.

![Foto7]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 7.jpg)

Span het stuk fietsbinnenband om het grote wiel heen. Zorg er dat band mooi gelijkmatig
zit. Van een afgedankte fietsband een robotband maken, dat is pas upcyclen (upcyclen is
recycleren tot beter dan het origineel)!

![Foto8]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 8.jpg)

## Stap 4: Monteren van de achterassen
Klik eerst de as met het grote wiel op zijn plaats in het chassis. Zorg dat het goed helemaal
recht en zo diep mogelijk zit.

![Foto9]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 9.jpg)

Klik de tweede as vast zoals op de foto. Let op de korte en de lange kant. Het komt er op
neer dat de as met het grote wiel ongeveer halverwege deze as komt.

![Foto10]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 10.jpg)

Controleer of alles goed vast zit en de assen vlot kunnen draaien.

![Foto11]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 11.jpg)

## Stap 5: Monteren van de motor
Steek het wormwiel op de motor. Doe de batterij in de batterijhouder en test even of de
motor werkt.

![Foto12]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 12.jpg)

Steek de motor in de opening. En schuif de batterijhouder op zijn plaats.

![Foto13]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 13.jpg)

Controleer of alles vlot draait. Het wormwiel moet voldoende dicht bij de tandwielen komen,
maar mag er ook niet te hard tegen duwen.

![Foto14]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 14.jpg)

Draai een oogschroef in het gat net naast de motor, om die op zijn plaats te houden. Blijf
controleren dat alles vlot blijft draaien. Soms moet je ook wat smeltlijm gebruiken om de
motor in de juiste positie te houden.

![Foto15]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 15.jpg)

## Stap 6: Monteren van de vooras
Schroef elk van de kegelwielen op een uiteinde van de vooras. Het smalle stuk komt tegen
de as. Schroef niet helemaal aan, want de wielen moeten vlot kunnen draaien.

![Foto16]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 16.jpg)

Schroef de as in het regelstuk. Ook hier schroef je dit niet helemaal aan, omdat het vlot moet
kunnen bewegen.

![Foto17]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 17.jpg)

Schroef het regeldeel op het chassis met een schroefoog. Je kan dat later losser en vaster
zetten om bij te sturen. Het ander schroefoog gebruik je in de volgende stap om de robot af
te regelen.

![Foto18]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 18.jpg)

## Stap 7: testen en afregelen
Met het voorste schroefoog regel je nauwkeurig de hoogte van de robot, zodanig dat het
grote wiel de tafel **net niet raakt** wanneer de robot helemaal op de tafel staat. Het is een
goed idee de robot te testen op een stuk karton of een plank die je op de grond legt. Zo valt
de robot niet meteen van de tafel als zij nog niet goed afgeregeld is.

![Foto19]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 19.jpg)

Wanneer minstens één van de kegelwielen van de tafelrand rijdt komt het grote wiel wel op
het tafeloppervlak en stuurt de robot bij.

![Foto20]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 20.jpg)

Je kan in de vooras een schroef toevoegen om een kant zwaarder te maken. Zo zorg je dat
de vooras steeds in de juiste zin kantelt wanneer die over de tafelrand komt.

![Foto21]({{ site.baseurl }}/assets/images/2020-07-14-Tafelrobot/tafelrobot foto - 21.jpg)

<div class="border_boxmaakbib01_img" markdown="1">
## Weetjes
Er bestaan verschillende definities van `robot`, maar de technische definitie is dat een robot
een machine is die reageert op de omgeving. De zogenaamde robots in een fabriek
bewegen volgens een voorgeprogrammeerd pad, vaak zonder dat ze iets waarnemen. Het
zijn dus vaak technisch gezien geen echte robots.

De meeste robots hebben elektrische of elektronische sensoren en een elektronisch “brein”
dat de robot laat reageren op de waarnemingen via de sensoren. De tafelrobot werkt
volledig mechanisch en heeft maar één reactie, maar is technisch gezien wel een echte
robot!
</div>