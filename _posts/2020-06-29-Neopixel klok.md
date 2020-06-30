---
layout: post
title:  "NeoPixel klok"
featured: false
published: false
authors: [guest]
lowtech: false
midtech: false
hightech: true
DIT: true
DIY: true
CHALLENGE: false
moeilijkheidsgraad_1_3: 2
prijs_1_3: 2
pijler_tinkering : false
pijler_design_thinking : false
pijler_digitale_fabricatie : true
pijler_physical_computing : true
licence: CCBY-NC-SA 
categories: [lasercutter, arduino, physical computing]
image: assets/images/2020-06-29-Neopixel-klok/Foto1.jpeg
tijd: 1 uur tot 2 uur
print: assets/images/2020-06-29-Neopixel-klok/MvM_Neopixel_klok_montagehandleiding.pdf
downloads: 
  - name: 'Montagehandleiding'
    file: assets/images/2020-06-29-Neopixel-klok/MvM_Neopixel_klok_montagehandleiding.pdf
  - name: 'Bedieningshandleiding'
    file: assets/images/2020-06-29-Neopixel-klok/MvM_Neopixel_klok_bedieningshandleiding.pdf
  - name: 'ESP8266 installatie in de Arduino IDE'
    file: assets/images/2020-06-29-Neopixel-klok/ESP8266_installatie_in_de_Arduino_IDE.pdf
  - name: 'Lasercutfile'
    file: assets/images/2020-06-29-Neopixel-klok/Neopixel_klok_maakbib_v1.0.svg
materialen_dontshow: false
materialen: [
    1 WEMOS D1 ESP8266 microcontroller,
    4 Neopixel ¼ cirkel print 15 neopixels,
    1 LDR,
    1 Krimpkous lengte 33 mm diameter 2.5 mm,
    1 Krimpkous lengte 23 mm diameter 2.5 mm,
    1 Micro USB kabel 1 meter,
    10 cm geïsoleerde draad rood soepel 0.2m^2,
    10 cm geïsoleerde draad zwart soepel 0.2m^2,
    10 cm geïsoleerde draad groen soepel 0.2m^2,
    11x 4 mm geïsoleerde draad stijf 0.2m^2,
    MDF 3 mm,
      ]
tools: [
      elastiek,
      halfronde zoetvijl,
      hetelucht blazer,
      kniptang,
      lasercutter,
      soldeerbout met fijne tip,
      soldeertin,
      striptang,
      universele bektang,
      houtlijm,
      alleslijm,
      lasercutter,  
      ]
      
---

Een supergave klok die je zelf gemaakt hebt? Wie wil dat nou niet.

Deze elektronische klok is de perfecte mix tussen een digitale en een analoge klok. Bij de bouw van de klok leer je precies werken, programmeren en solderen.

Maaktijd: 1 tot 2u.



Materiaalkost 


 
Deze handleiding werd ontwikkeld door **Hans Caluwaerts** voor Maakbib


## Benodigdheden

{% include benodigdheden.html %}

![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto2.jpg)

#### Voeding

De Neopixel klok werkt op 5V DC.
Je kan de klok voeden via een USB aansluiting, het stroomverbruik bedraagt maximum 0,5 Ampère.

## Aan de slag

#### MDF laseren

Voor het solderen van de vier NeoPixel ¼ cirkel printjes is het aangeraden om een mal te gebruiken.
Het gebruik van de mal verhoogt aanzienlijk de kans om een “ronde cirkel” te bekomen na het solderen van de vier NeoPixel ¼ cirkel printjes.

Alvorens je de mal kan monteren, moet deze eerst uitgelaserd worden. Dit kan je doen bij een [FabLab in je buurt](https://fablab.nl/).

![Lasercutfile]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Neopixel_klok_maakbib_v1.0.svg)


#### Montage van de mal

 1. Breng lijm aan op de onderkant van de dekplaat.
 2. Plaats de dekplaat op de bodemplaat.
 3. Centreer beide platen.
 4. Verwijder alle overtollige lijm.  
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto3.jpg)
 5. Plaats de afvalring in de dekplaat.     
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto4.jpg)
 6. Breng lijm aan op de onderkant van de centreerplaat.
 7. Lijm de centreerplaat in het midden van de bodemplaat.    
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto5.jpg)
 8. Laat 10 minuten drogen.
 9. Verwijder voorzichtig de afvalring zonder de centreerplaat te verschuiven.

De mal is nu klaar voor gebruik.

![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto6.jpg)

#### Monteren van de NeoPixel klok houder
 
 1. Breng houtlijm aan op de achterkant van de onderste sierplaat.
 2. Lijm de onderste sierplaat op de achterwand.
    • LET OP DE CORRECTE ORIENTATIE!.
 3. Verwijder alle overtollige lijm.
 4. Laat de lijm 15 minuten uitharden.  
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto7.jpg)

 5. Plaats een Neopixel ¼ cirkel printje tegen de onderste sierplaat.  
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto8.jpg)

 6. Breng houtlijm aan op de achterkant van de bovenste sierplaat.
 7. Lijm de bovenste sierplaat op de achterwand.
 8. Duw de “sierplaat boven” tot tegen het Neopixel ¼ cirkel printje.   
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto9.jpg)

 9. Verwijder het Neopixel ¼ cirkel printje zonder de “sierplaat boven” te verschuiven. 
 10. Verwijder alle overtollige lijm.
 11. Laat de lijm 5 minuten uitharden.  
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto10.jpg)

 12. Vul de afgesloten opening voor de helft met houtlijm.  
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto11.jpg)
  
 13. Schuif de voet met de nok in de afgesloten opening van de achterwand.
    • DE TEKST OP DE VOET MOET NAAR ONDER GERICHT ZIJN.
 14. Vorm een hoek van enkele graden minder dan 90°
 15. Verwijder alle overtollige lijm.
 16. Laat de lijm 30 minuten uitharden.   
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto12.jpg)
 
 17. Lijm de Wemos D1 tegen de onderkant van de Wemos houder met alleslijm.
 18. Laat de lijm 5 minuten uitharden.   
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto13.jpg)

 19. Knip 1 cm af van 1 draad van de LDR.
 20. Schuif een krimpkous 33 mm over de langste draad van de LDR.
 21. Schuif een krimpkous 23 mm over de kortste draad van de LDR.  
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto14.jpg)
     
 22. Steek de aansluitdraden van de LDR door de opening in de Wemos houder.
 23. Duw de LDR volledig in het gat.   
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto15.jpg)
 
 24. Soldeer de lange LDR draad aan Wemos pin 3V3.
 25. Soldeer de korte LDR draad aan Wemos pin A0.  
    ![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto16.jpg)
 
 26. Soldeer de 4 Neopixel ¼ cirkel printjes aan elkaar, zie Stappenplan voor het solderen van de neopixelcirkel.   
 27. Smeer alleslijm in de gleuf tussen de onderste sierplaat en de bovenste sierplaat.  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto17.jpg)

 28. Steek de aansluitdraden langs de voorkant door het gat van de achterwand.  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto18.jpg)

 29. Plaats de Neopixel ring tussen de onderste en de bovenste sierplaat.
 30. Draai de Neopixel ring om de eerste neopixel te centreren met de punt van de driehoek. 
    • De eerste neopixel zit links van de naad tussen de 2 Neopixel printjes.
 31. Druk de Neopixel ring tegen de achterwand.
 32. Leg de Neopixelring met de Neopixels op een platte ondergrond.
 33. Laat de lijm 15 minuten uitharden.  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto19.jpg)

 43. Soldeer de GND draad aan het G soldeereiland van de WEMOS D1.
 44. Soldeer de IN draad aan het D2 soldeereiland van de WEMOS D1.
 45. Soldeer de VCC draad aan het 5V soldeereiland van de WEMOS D1.  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto20.jpg)

 46. Breng een bolletje alleslijm van enkele mm dik aan in het midden van de voet. 
    • Deze lijm dient om de WEMOS D1 tegen de voet te lijmen.
 47. Breng een druppel houtlijm aan in de opening in de achterwand waar de nok van de WEMOS houder in past.
    • Deze lijm dient om de WEMOS houder tegen de achterwand te lijmen.
 48. Draai een elastiek rond de voet.
 49. Laat de lijm 15 minuten uitharden.  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto21.jpg)




#### Solderen van de NeoPixelcirkel

Dit stappenplan maakt gebruik van de mal.
Indien je niet over de mal beschikt kan de vier neopixel ¼ cirkel printjes op een vlakke ondergrond kleven met plakband. Probeer een zo rond mogelijke cirkel te maken.

 50. Soms worden de Neopixel ¼ cirkel printjes nog met elkaar verbonden geleverd.
 51. Breek de Neopixel ¼ cirkels printjes voorzichtig los van elkaar.
 52. Verwijder de verbindingsstukjes  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto22.jpg)

 53. Gebruik een halfronde zoetvijl om alle oneffenheden aan de rand het Neopixel ¼ cirkel printje weg te vijlen.
 54. Verwijder de bramen van de hoeken van het Neopixel ¼ cirkel printje.
 55. Herhaal deze stap voor de vier Neopixel ¼ cirkel printjes      
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto23.jpg)

 56. Plaats de 4 Neopixel ¼ cirkel printjes in de mal.
 57. Als de 4 Neopixel ¼ cirkel printjes niet goed passen in de mal moet je hier en daar nog wat bijvijlen.
 58. Zorg ervoor dat de soldeereilandjes niet samenvallen met de gaten  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto24.jpg)

 59. Knip 11 stukjes ongeïsoleerde stijve draad van 4 mm lengte. Je kan hiervoor ook aansluitdraad van een weerstand, LED,… gebruiken.  

        **DETAIL A**

 60. Verbind de soldeereilandjes VCC met een stukje ongeïsoleerde stijve draad van 4 mm.
 61. Verbind de soldeereilandjes IN en OUT met elkaar met een stukje ongeïsoleerde stijve draad van 4 mm.
 62. Verbind de soldeereilandjes GND met een stukje ongeïsoleerde stijve draad van 4 mm.
 63. Verbind nog op 2 ander plaatsen de soldeereilandjes met elkaar zoals hierboven beschreven.  

        **DETAIL B** 
   
 64. Verbind de soldeereilandjes VCC met een stukje ongeïsoleerde stijve draad van 4 mm.
 65. Strip 2 mm isolatie aan beide uiteinden van een soepele rode, roze of paarse draad met lengte 58 mm.
 66. Soldeer de draad aan de VCC soldeereilandjes.
 67. Strip 2 mm isolatie aan beide uiteinden van een soepele witte, gele of groene draad met lengte 45 mm.
 68. Soldeer de draad aan het IN soldeereilandje. 

        LET ZEER GOED OP DAT TIJDENS HET SOLDEREN DE IN EN OUT EILANDJES NIET MET ELKAAR VERBONDEN WORDEN.

 69. Strip 2 mm isolatie aan beide uiteinden van een soepele witte, gele of groene draad met lengte 55 mm.
 70. Soldeer de draad aan de GND soldeereilandjes.  
![Materialen]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Foto25.jpg)






<div class="border_boxmaakbib01_img" markdown="1">
## Weetjes

 * **` Network Time Protocol`**
 
 David L. Mills is de uitvinder van het [Network Time Protocol](https://nl.wikipedia.org/wiki/Network_Time_Protocol).
 Het Network Time Protocol of Netwerktijdprotocol (NTP) is een protocol waarmee computers die onderling met elkaar in verbinding staan, hun interne klok kunnen synchroniseren met andere computers.
 Het is een van de oudste internetprotocollen dat nog in gebruik.
 
  ![David L. Mills]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Weetjes1.jpg)
  
 
 * **` Tijd vragen aan een tijdserver`**
 
 Een tijdserver is een computer die op verzoek de juiste tijd doorstuurt. Het verzoek moet verlopen volgens het formaat dat vastgelegd is in het NTP protocol. Het NTP protocol gebruikt het UDP protocol (User Datagram Protocol) voor het verzoek en voor het antwoord waarin de tijd gecodeerd staat. Door het gebruik van bibliotheken kan je relatief eenvoudig de tijd opvragen aan een tijdserver.
 [Tijdservers gebruiken UTC tijd](https://www.vrt.be/vrtnws/nl/2018/05/03/tijdszones--gmt--utc--hoe-zit-dat-in-elkaar-/).


 * **` Epoch (= tijdstip) time is niet zo simpel als je zou denken`**
 
 Epoch (= tijdstip) time is niet zo simpel als je zou denken.  
 NTP servers gebruiken 1 januari 1900 als epoch (referentietijdstip). Dit wil zeggen dat de ontvangen tijd overeenstemt met het aantal seconden sinds 1 januari 1900. Dit is niet gemakkelijk te lezen of te interpreteren.  
 De ontvangen tijd is de UTC tijd, deze tijd moet je nog aanpassen aan je lokale tijdzone.  
 UTC tijd houdt geen rekening met de lokale gewoontes voor zomer- en winteruur.

 Computers werken met UNIX tijd; UNIX tijd gebruikt als epoch 1 januari 1970. 

 UTC = 3797841198  
 = donderdag 7/05/2020 11:53:19 GMT  
 = donderdag 7/5/2020 13:53:19 lokale tijd (Brussel = GMT + 2 (tijdens zomeruur))  
 = 3797840660 – 2208988800 = 1588852398 UNIX tijd

 De UNIX tijd wordt bewaard in een 32 bit variabele, op 19 januari 2038 zal er overflow optreden.

 Voor eenvoudige toepassingen totaal onbelangrijk maar leuk om te weten is dat de UTC tijd aangepast wordt met schrikkelseconden om het verschil in lengte tussen de gemiddelde zonnedag en de op de klok gebaseerde periode van precies 24 uur te corrigeren.
 

 * **` WiFi LED klok`**
 
 De WiFi LED klok gebruikt 60 Neopixels om de tijd aan te duiden.  
 Een Neopixel is een adresseerbare RGB LED (RGB staat voor Rood - Groen - Blauw).
 Adresseerbaar betekent dat aan de Neopixel een nummer toegekend wordt. 

 De helderheid van de R,G en B LED kan onafhankelijk van elkaar ingesteld worden op 256 verschillende waardes (= 8 bit gecodeerd), daardoor kan een Neopixel (256 x 256 x 256) 16,7 miljoen verschillende kleuren tonen door het principe van [additieve kleurenmenging](https://nl.wikipedia.org/wiki/Kleurmenging). 
 
 ![Kleurmenging]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Weetjes2.jpg) 
 
 
 * **` WIFI Neopixel klok`**
 
 Meestal worden in een opstelling meerdere Neopixels gebruikt.
Een Neopixel heeft 4 aansluitingen, massa (GND), 5V (= 5 Volt), DIN (Data In) en DOUT (Data OUT).  
DIN is verbonden met de microcontroller en DOUT gaat naar DIN van de volgende Neopixel. Je kan onbeperkt Neopixels toevoegen aan de ketting als je microcontroller voldoende geheugen heeft. Hoe langer de ketting hoe langer de reactietijd wordt.

 ![Neopixel]({{ site.baseurl }}/assets/images/2020-06-29-Neopixel-klok/Weetjes3.jpg)


 * **` Stroomverbruik`**
 
De WiFi LED klok wordt gevoed via de USB kabel.  
Bij maximum helderheid (= wit) verbruikt een 1 Neopixel 60 mA (3 x 0,02 = 0,06 Ampère).  
Dit lijkt weinig maar als je 60 Neopixels gebruikt zoals in de WiFi LED klok dan kan de stroom stijgen tot 3,6 Ampère, dit is te veel voor een klassieke USB voeding.  
De WiFi LED klok is zo geprogrammeerd dat de Neopixels nooit allemaal samen op volle intensiteit zullen oplichten. De WiFi LED klok verbruikt maximum 0,2 Ampère.



#### Wil je meer weten over NeoPixels?
 Je kan (bijna) alles over NeoPixels leren in [dit document](https://cdn-learn.adafruit.com/downloads/pdf/adafruit-neopixel-uberguide.pdf?timestamp=1588458250).

</div>


## STEM

In deze high tech activiteit komt heel wat techniek aan bod! We hebben in deze handleiding tenslotte zelf ons eigen klok gemaakt! 
En je hebt vooral getraind op het veilig en nauwkeurig werken. 

 
<div class="border_boxmaakbib03_img" markdown="1">
#### Challenge!

Kan je een binaire klok maken?

 

</div>

#### Maak het je eigen
 * Kies je eigen kleuren voor de verschillende 'wijzers'.
 * Versier de klok zoals jij maar wil.


## Voorbeelden
Heb je een foto van je eigen NeoPixel klok? Stuur hem ons!
