---
layout: post
title:  "IOT Energieverbruik helper"
featured: true
published: true
authors: [guest]
author_name: "Stijn Liekens"
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
categories: [tinkering, wetenschappen, arduino]
image: assets/images/2020-06-30-IOT-Energieverbruikhulp/image6.jpeg
tijd: + 3 uur
print: assets/images/2020-06-30-IOT-Energieverbruikhulp/IOT_energieverbruik_helper.pdf
downloads: 
  - name: 'Handleiding'
    file: assets/images/2020-06-30-IOT-Energieverbruikhulp/IOT_energieverbruik_helper.pdf
  - name: '3D files'
    file: assets/images/2020-06-30-IOT-Energieverbruikhulp/3D-files.zip
  - name: 'Arduino files'
    file: assets/images/2020-06-30-IOT-Energieverbruikhulp/arduino-files.zip  
  - name: 'Lasercut files'
    file: assets/images/2020-06-30-IOT-Energieverbruikhulp/lasercut-files.zip
materialen_dontshow: true
materialen: [

      ]
tools: [
      Computer,
      Micro-usb kabel,
      WiFi,
      Smartphone,
      3D-printer,
      Lijmpistool,
      ]

---
Maak je eigen IOT energieverbruik hulp, en krijg een melding op je smartphone als het licht of de verwarming nog aan staat wanneer er tussen een bepaald tijdsinterval niemand meer in de kamer is.

Leer hoe je de ESP32 programmeert met de Arduino IDE.
Ontdekt hoe je meldingen kan sturen naar je smartphone met Arduino.

Maaktijd: langer dan 3u.

Materiaalkost onder de 6 EUR, maar met ESP32 van 20 Eur.
 
Deze handleiding werd ontwikkeld door **Stijn Liekens** voor Maakbib


## Benodigdheden
<p style="margin: 0 0 0 0;"><strong>Materialen:</strong></p>

<div class="benodigdheden">
  <ul>
    <li><a href="https://www.kiwi-electronics.nl/pir-bewegingssensor)</li>PIR sensor(https://www.kiwi-electronics.nl/pir-bewegingssensor">PIR sensor</a></li>
    <li><a href="https://www.cheaptech.nl/myxl-ky-13-analog-temperature-sensor-module-voor-a.html">KY-013 temperatuur sensor</a></li>  
    <li><a href="https://nl.banggood.com/20Pcs-5MM-Light-Dependent-Resistor-Photoresistor-GL5528-LDR-p-943459.html?gpla=1&gmcCountry=BE&currency=EUR&createTmp=1&utm_source=googleshopping&utm_medium=cpc_bgcs&utm_content=xibei&utm_campaign=xibei-pla-beg-pc-nl-all-0314&gclid=CjwKCAjw_LL2BRAkEiwAv2Y3SdOlPEAAnN2u16GF3x10iapwzTBTNUGWogxzv3UXWETyHte3GWtUWRoCeOwQAvD_BwE&cur_warehouse=CN">Photoresistor GL5528</a>, weerstand bij licht 10Ω - 20KΩ, weerstand donker 1 MΩ </li>
    <li>Mini Breadboard</li>
    <li>Draden</li>
    <li>Weerstanden (10kΩ en 220 Ω)</li>
    <li><a href="https://nl.banggood.com/Basic-Starter-Kit-UNO-R3-Mini-Breadboard-LED-Jumper-Wire-Button-With-Box-For-Geekcreit-for-Arduino-products-that-work-with-official-Arduino-boards-p-1161006.html?gpla=1&gmcCountry=BE&currency=EUR&createTmp=1&utm_source=googleshopping&utm_medium=cpc_bgcs&utm_content=xibei&utm_campaign=xibei-ssc-beg-nl-ele-1221&gclid=CjwKCAjw_LL2BRAkEiwAv2Y3SWfGPpbN1Vc-jm9PcLict3B1BX1qEFMdl5EISaTiZtk60txfWzG6jhoC7UsQAvD_BwE&cur_warehouse=CN">LED’s</a></li> 
    <li><a href="https://www.bol.com/nl/p/esp-wroom-32-esp32-esp-32s-ontwikkelbord-development-board-2-4-ghz-dual-mode-wifi-bluetooth-dual-cores-microcontroller-processor-geintegreerd-met-antenne-rf-amp-filter-ap-sta-voor-arduino-ide/9200000114634593/?country=BE">ESP-WROOM-32</a></li> 
 </ul>
</div>

![Materialen]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image7.png)

{% include benodigdheden.html %}


## Aan de slag

#### Arduino software configureren

 1. Start [Arduino IDE](https://www.arduino.cc/en/Main/Software) op, dit is het programma om de Arduino Code in te schrijven, en ziet er zo uit:  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image8.png)  
Als de Arduino IDE nog niet op je computer geïnstalleerd is, kan je het [hier](https://www.arduino.cc/en/Main/Software) gratis downloaden.

 2. Ga naar de Preferences, onder FILE → PREFERENCES  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image9.png)

 3. Copy Paste het volgende in het “Additional Boards Manager URLs” vak.
 
 
        https://dl.espressif.com/dl/package_esp32_index.json  
    
    En druk op "OK".  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image10.png)  

 4. Open de Board Manager, onder TOOLS → BOARD: “….” → Boards Manager. Dit zal even duren, bord defenities worden eerst gedownload.  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image11.png) 

 5. Typ “ESP32” in de zoekbalk en instaleer het pakket.  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image12.png)  
    En druk op “close”

 6. Test de Arduino  
    Verbind de Arduino met de Computer via de usb kabel. 

 7. Open het voorbeeld “Wifi Scan” , onder File → Examples → WiFi → WiFiScan  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image13.png)  

 8. Selecteer “ESP32 Dev Module”, onder Tools → Board… → ESP32 Dev Module. We gaan er hier vanuit dat je de ESP32 gekocht hebben zoals wij gebruiken. Heb je een ander type ESP32, dien je hier de juiste versie te kiezen.  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image14.png)  

 9. Selecteer de juiste COM poort, onder Tools → Port. De juiste poort is deze die er nieuw bijstaan na het aansluiten van je ESP32.  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image15.png)  

 10. Upload de WiFiScan code naar de Arduino. Druk eerst op het vinkje links boven om de code te compileren (rood omcirkeld in de figuur hieronder). Dit mag geen fouten geven. Upload daarna door op de pijl links boven naast het vinkje te drukken.  
  Problemen bij uploaden? Hou dan de “boot” drukknop op de Arduino ingedrukt tijdens het uploaden (omcirkeld op de foto).  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image16.png)  

 11. Open de serial monitor, onder Tools → Serial Monitor  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image17.png)  

 12. Zet het Baud tapje naar 115200  
![Arduino software]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image18.png)  
    Als je nu een lijst krijgt van alle wifi netwerken in de buurt zoals hierboven, dan werkt alles zoals het moet!  

#### Componenten assembleren

Het elektrisch schema is als volgt:

![Assembleren]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image19.png)  
![Assembleren]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image20.png)  
Assembleer alle componenten zoals hierboven weergegeven.

![Assembleren]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image21.png)  

Als alles goed in elkaar gestoken is zou het geheel er ongeveer moeten uitzien als hierboven.

Om nu te testen of we alles juist hebben verbonden en alles werkt, gaan we testcode uploaden. 

Deze gaat de waardes van de inputs (temperatuur sensor, lichtsensor en bewegingssensor) in de Serial monitor weergeven. En de groene en rode led zullen aan gaan wanneer er beweging gedetecteerd wordt.

De testcode (op de foto hieronder) is terug te vinden in de [zip bijlage]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/arduino-files.zip) onder de naam “Aansluitingen_test”, zo moet je die niet overtypen!

 1. Open de testcode “Aansluitingen_test”  
![Assembleren]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image22.png)  

 2. Upload de test code, vergeet niet op de “boot” knop op de Arduino te drukken tijdens het uploaden.  
 3. Open de serial monitor, en zet de baud op 115200.  
![Assembleren]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image23.png)  
 
 4. Als de serial monitor er zo uit ziet en de LED’s aan gaan wanneer je voor de bewegingssensor zwaait is alles in orde!
 
 We kunnen nu verder met het volgende hoofdstuk: GSM meldingen sturen.
 
#### GSM melding sturen
 
 1. Download de [IFTTT APP](https://play.google.com/store/apps/details?id=com.ifttt.ifttt&hl=nl) op je smartphone en maak een account.
 2. We dienen een eigen app te maken die onze meldingen oppikt. Maak dus de applet, in de huidige versie zijn de opeenvolgende stappen:  
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image24.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image25.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image26.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image27.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image28.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image29.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image30.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image31.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image32.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image33.png)
    
    Laat de “link URL” en “image URL” leeg  

 3. Hierna dien je je persoonlijke IFTTT Code op te vragen.  
    Surf naar: [ifttt.com/maker_webhooks](https://ifttt.com/maker_webhooks)  
    Check dat je ingelogd bent!  
    En druk op “Documentation”, dan opent er een webpagina met jouw `Persoonlijke Code`.
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image34.png)
    
    ![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image35.png)  
    
    Om te testen of alles juist is ingesteld, dien je nu een test code up te loaden naar de Arduino.  

 4. Open de code “ GSM_notificatie_test” (deze is te vinden in de [zip bijlage]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/arduino-files.zip)).  
![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image36.png)  
 
 5. Vervang (WIFI_NAAM) door je eigen wifi netwerk, bv.: *telenet-80415*.  
    Vervang (wifi_wachtwoord) door je eigen wifi wachtwoord.  
    Vervang (XXXXXXXXXXXX) door de persoonlijke Code die je in stap 3 hebt opgevraagd.  

 6. Upload de code naar de Arduino,  vergeet niet de “boot” drukknop ingedrukt te houden tijdens het uploaden.

 7. Ontvang een melding!  
![Applet]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image37.png)  
 Als alles goed is verlopen zou je na enkele seconden een melding moeten krijgen op de Smartphone.
 
 
#### Finale Code

 1. Open de volledige code voor onze energieverbruik melder, deze is te vinden als “volledige_code”  in de [zip bijlage]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/arduino-files.zip).  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image38.png)  

 2. Vervang (WIFI_NAAM) door je eigen wifi netwerk, bv.: *telenet-80415*.  
    Vervang (wifi_wachtwoord) door je eigen wifi wachtwoord.  
    Vervang (XXXXXXXXXXXX) door de persoonlijke code die je eerder hebt opgevraagd.  

 3. Je dient nu de parameters van de code in te stellen.  
    Het eerste deel van de code tot aan de sterretjes lijn vanonder zijn alle instellingen voor de code.
    Hier kan je instellen vanaf wanneer de IOT energieverbruik helper inschakelt door de waarde van `uur_start` en `minuten_start` aan te passen.  Nu is `uur_start = 20` en `minuten_start= 0`, wat betekent dat de helper inschakelt om 20u ’s avonds.

    Hetzelfde geld voor `uur_stop` en `minuten_stop`.  
    Deze staan nu op 8 en 15, wat wilt zeggen dat de helper om 20u ’s avonds ingeschakeld wordt en ’s morgens om 8:15 uitgeschakeld wordt.  

    Ook kan je hier de `tijd_geen_beweging_tot_melding_sturen` aanpassen, dit is zoals de naam doet vermoeden: hoe lang er niemand aanwezig mag zijn (in minuten) als de helper actief is voordat hij een melding stuurt als het licht of de verwarming nog aan zou staan.
    Momenteel staat die op 1, wat wilt zeggen dat er al een melding kan gestuurd worden na 1 minuut.  
    
    ![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image39.png)  

 4. Uitleg **void setup()** deel van de code   
 Dit deel van de code zal slechts een keer uitgevoerd worden wanneer de Arduino opstart.
 Dus zetten we hier alle commando’s die maar één keer moeten gebeuren.  
 Zoals de `pinMode` commando’s ,die vertellen de Arduino welke pins outputs moeten zijn, want op de ESP32 kunnen de meeste pins zowel outputs als inputs zijn.  
 Ook zeggen we hier of die pinnen hoog of laag moeten zijn bij het opstarten.  
 Daarna maken we verbinding met de wifi, synchroniseren we de interne klok en kalibreren we de analoge sensoren.  
 Deze drie commando’s zijn geschreven als modules zodat we die eenvoudig in onze code kunnen gebruiken, de volledige modules van deze drie onderdelen komen in de volgende puntjes aan bod.  
 Als laatste definiëren we de tijd als `minuten_sinds_middernacht` omdat dit makkelijker rekent verder in de code.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image40.png)  

 5. Uitleg **void loop()** deel van de code  
 Dit is het deel van de code die voortdurend zichzelf zal herhalen.
 Dit deel van de code zorgt ervoor dat wanneer de helper actief is en er voor de bepaalde tijd (`buffer_tijd`) geen beweging meer is geweest in de ruimte, er een melding zal gestuurd worden als het licht of de kachel nog aan staat.  
 Als er iemand in de kamer is tijdens deze `buffer_tijd` zal de timer resetten en zal de helper weer wachten vooraleer een melding te verzenden moest het licht of de kachel nog aan staan.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image41.png)  

 6. Commando’s in de code 
    Dit zijn de stukken code die geschreven zijn als op te roepen modules en die we al eerder hebben gebruikt in `void setup` en `void loop`.  

    1. maak_verbinding() commando
     Deze module verbind de Arduino met het wifi netwerk en laat de rode LED branden zolang de module bezig is met de verbinding tot stand te brengen. Switcht naar de groene LED als de verbinding geslaagd is.  
     ![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image42.png)  

    2. sync_tijd() commando  
 Deze module synchroniseert de interne klok van de Arduino met het internet door een Google tijd server te contacteren.  
 Ook hier weer gaat de rode LED branden zolang de module bezig is en switcht deze naar de groene LED als alles succesvol is verlopen.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image43.png)

    3. kalibreren() commando  
 Dit commando kalibreert de temperatuur en de licht sensor naar de kamer en positie waarin de helper wordt geplaatst. Deze zullen beschouwd worden als **de goede gewenste waarden**. 
 Ook hier weer gaat de rode LED branden zolang de module bezig is en switcht deze naar de groene LED als alles succesvol is verlopen.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image44.png)  

    4. stuur_melding() commando  
 Deze module stuurt een bepaald stukje tekst naar de Webhook server zodat dit naar de app op je smartphone kan verzonden worden.
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image45.png)  

    5. check_sensoren_en_stuur_meldingen() commando  
 Deze module lijst de temperatuur en licht sensor en bepaalt of het licht of de kachel nog aan staat. 
 En als een van de twee, of beiden, nog aan staan stuurt deze module de juiste melding naar je smartphone.  
 Dit gebeurt door het juiste stukje tekst naar de stuur_melding() module te sturen.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image46.png)  


#### De behuizing

Ons project is niet af als we niet ook voor een behuizing zorgen voor onze energieverbruiker! Laat ons er dus eentje maken.

 1. 3Dprint de behuizing  
 De STL files hiervoor zijn te vinden in de [zip bijlage]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/3D-files.zip) als `3D print case bottom` en `3D print case top`.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image47.png)
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image48.png)  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image49.jpeg)  

 2. Plaats de componenten in de behuizing. Gebruik het lijmpistool of dubbelzijdige tape op het mini breadboard om deze in de behuizing te lijmen zodat de usb poort overeen komt met het gat.  Duw de bewegingssensor in het gat in het deksel zoals op de foto hieronder.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image50.jpeg)  

 3. Sluit de behuizing. Plaats het dekseltje zo op de behuizing zodat het gat over de LED’s en sensoren komt te liggen, zoals op de foto hieronder.  
![Finale Code]({{ site.baseurl }}/assets/images/2020-06-30-IOT-Energieverbruikhulp/image51.jpeg)  


#### Plaatsen voor gebruik 

Om de helper nuttig te kunnen gebruiken is het best dat je hem dicht bij een verwarming plaatst en op een plaats waar niet veel zonlicht valt, maar integendeel door de binnenverlichting wel goed oplicht.

 1. Zet de helper op de gekozen plaats.  

 2. Zorg ervoor dat **het buiten donker is**, de **binnenverlichting uit is** en dat **de kachel uit** staat. Onze energieverbruiker calibreert immers met de waarden tijdens de opstart, en beschouwt deze startwaarden als de goede waarden. Je zou dit in de code kunnen wijzigen in voorgedefinieerde waarden.

 3. Steek de stekker van de helper in het stopcontact. Voor het optimale resultaat doe je dit best ’s avonds.  
Wanneer je de stekker in steekt zal de helper na enkele seconden beginnen zijn sensoren te kalibreren, dus het is best om wat afstand te nemen voor een accurate kalibratie.  

 4. Klaar!  
 Nu krijg je een melding iedere keer het licht of de kachel nog aan staat en er al een bepaalde tijd niemand in de kamer is geweest wanneer de helper actief is!


<div class="border_boxmaakbib01_img" markdown="1">
## Weetjes

Met de Arduino en IFTTT app kan je nog veel meer doen dan enkel meldingen sturen!
Je kan bijvoorbeeld Alexa iets laten zeggen als er nog een licht aan staat of een email sturen naar iemand om het licht te gaan uit zetten, om er maar twee te noemen. 

</div>


## STEM

In deze high tech activiteit komen heel wat technieken aan bod! We hebben in deze handleiding met een 3d printer gewerkt en met de arduino IDE en de verschillende sensoren.
 
 
<div class="border_boxmaakbib03_img" markdown="1">
#### Challenge!

Breid het systeem uit met een rookmelder.
</div>

#### Maak het je eigen
 * Kun je zelf een behuizing ontwerpen voor het systeem?


## Voorbeelden
Heb je een foto van je eigen IOT Energieverbruik helper? Stuur hem ons!
