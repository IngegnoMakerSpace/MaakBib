void LED_WiFi() // knipper 1 rode LED tijdens connecteren met WiFi
{
  pixels.setPixelColor(0, pixels.Color(100, 0, 0));  // pixel 0 rood aan
  pixels.show();         // update pixels
  delay(20);
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));   // pixel 0 rood aan
  pixels.show();             // update pixels
  delay(479);
}

/*****************************************************************************************************/

void LED_test() // zet alle LEDS wit bij opstarten= hardwar test LEDs
{
  for (float x = 7; x <= 20; x = x * 1.1)  // Dimeffectje rood
  {
    led_test_kleur = Achtergrond;  // stel RGB in op achergrondwaarde
    led_test_kleur.rood = x;       // pas R-waarde aan met for-next loop
    doe_RGB_update();              // update alle LEDs
    delay(30);
  }
  delay(1000);    // Laat LEDs 1 seconde aan

  for (float x = 7; x <= 20; x = x * 1.1)  // Dimeffectje groen
  {
    led_test_kleur = Achtergrond;
    led_test_kleur.groen = x;
    doe_RGB_update();
    delay(30);
  }
  delay(1000);    // Laat LEDs 1 seconde aan

  for (float x = 7; x <= 20; x = x * 1.1)  // Dimeffectje blauw
  {
    led_test_kleur = Achtergrond;
    led_test_kleur.blauw = x;
    doe_RGB_update();
    delay(30);
  }
  delay(1000);    // Laat LEDs 1 seconde aan
  led_test_kleur = Achtergrond;  // herstel de achtergrondkleur voor de LEDs
  doe_RGB_update();              // vul buffer met achtergrondkleur
}

/*****************************************************************************************************/

void doe_toon_tijd()    // toon de tijd op de LEDs
{

  int LDR_waarde = analogRead(A0);   // lees de waarde van de analoge ingang A0 = omgevinslichtsterkte

 // Serial.print("LDR_waarde = ");     // toon de karakters tussen aanhalingstekens in seriele monitor
  //Serial.println(LDR_waarde);        // toon de waarde van LDR_waarde in de seriele monitor

  helderheid = map(LDR_waarde, 0, 1023, 1, 50); // map waarde LDR tussen 1 en 50

  pixels.setBrightness(helderheid);  // Zet de Neopixels helderheid op "helderheid" = automatiche helderheidsregeling

 // Serial.print("helderheid = ");    // toon de karakters tussen aanhalingstekens in seriele monitor
 // Serial.println(helderheid);       // toon de waarde van helderheid in de seriele monitor

  trigger_toon_tijd = false;
  //  DateTime now = RTC.now();


  minuten =  minute();               // minuten van de TimeLib bibliotheek
  seconden = second();               // minuten van de TimeLib bibliotheek

  //Serial.print(zomeruur);            // toon de waarde van zomeruur in de seriele monitor
  //Serial.print(":");                 // toon de karakters tussen aanhalingstekens in seriele monitor
  //Serial.print(minuten);             // toon de waarde van minute in de seriele monitor
  //Serial.print(":");                 // toon de karakters tussen aanhalingstekens in seriele monitor
  //Serial.println(seconden);          // toon de waarde van seconden in de seriele monitor

  //Vul de achtergrond op
  RGB digits[60] = {minuut_kleur, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                    Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                    Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                    Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                    Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond
                   };

  if (zomeruur > 12)   // 12 uur klok, dus 24 uur van RTC omzetten in 12 uur
  {
    zomeruur = zomeruur - 12;
  }

  if (zomeruur == 12)   // 12 uur = 0 uur voor de berekening van de leds
  {
    zomeruur = 0;
  }


  // LED Update voor minuten
  // zet al de LEDS voor minuten aan
  // vb 15 minuten = zet 15 LEDS aan
  for (int i = 0; i <= minuten; i++) {
    digits[i] = minuut_kleur;          // zet al de LEDS voor minuten aan
  }

  // LED Update voor uren
  // LED UUR overschrijft LED minuten
  // UUR wordt getoond met 1 pixel
  // licht laaste pixel op de zone van het uur
  digits[zomeruur * 5] = uur_kleur;


  // Toon 1 pixel voor en 1 pixel achter uur als seconde en uren samenvallen op zelfde pixel
  // BIJ VOEDING VAN DE PIXELS OP 6 UUR : uitzondering voor 0 uur en 12 uur, de "vorige pixel is pixel is pixel - 1  maar de volgende pixel
  // geeft overflow (pixel 60 bestaat niet) en moet dus aangepast worden naar pixel 0 is , dus zelf adres van de pixel ingeven.


  if (seconden == zomeruur * 5)  // seconden vallen samen met uuraanduiding
  {
    if (zomeruur == 0 )
    {
     // Serial.print("SPECIAAL ");
      digits[1] = uur_kleur;  // seconde LED voorbij uuraanduiding is NEOPIXEL 1
      digits[59] = uur_kleur; // seconde LED voorbij uuraanduiding is NEOPIXEL 59
    }
    else
    {
      digits[zomeruur * 5 + 1] = uur_kleur; // seconde LED voorbij uuraanduiding in uurkleur zetten`
      digits[zomeruur * 5 - 1] = uur_kleur; // seconde LED voor uuraanduiding in uurkleur zetten
    }
  }
  else digits[zomeruur * 5] = uur_kleur;    // seconden vallen NIET samen met uuraanduiding

  digits[seconden] = second_kleur;          // zet seconde LED aan in buffer

  // voor aansluiting leds onderaan de cirkel (= neopixel 0 = 30 seconden neopixel)
  // pixels zijn 30 posities in wijzerzin verschoven

  for (int i = 0; i <= 29; i++) {
    pixels.setPixelColor(i, pixels.Color(digits[i + 30].rood, digits[i + 30].groen, digits[i + 30].blauw));
  }

  for (int i = 30; i < aantal_leds; i++) {
    pixels.setPixelColor(i, pixels.Color(digits[i - 30].rood, digits[i - 30].groen, digits[i - 30].blauw));
  }

  pixels.show(); // toon de aangepaste pixels
}

/*****************************************************************************************************/

void doe_knipper_minuut()    // doe de huidige minuut knipperen

{
  // Serial.println("doe_trigger_knipper_minuut");   // toon de karakters tussen aanhalingstekens in seriele monitor
  trigger_knipper_minuut = false;

  zomeruur = hour();         // lees uur in 
  minuten =  minute();       // lees minuten in


  // OPGELET: wanneer de knipperende minuut pixel samenvalt met de uurpixel dan moet de
  //          knipperende pixel knipperen tussen de kleur van minuut en uur ipv minuut_kleur_uit

  if ((minuten == zomeruur * 5))  // knipper de minuutled met kleur van uur pixel
  {
    knipperkleur =  uur_kleur;    //knipper naar uurkleur
  }
  else   knipperkleur =  minuut_kleur_uit; // knipper naar minuut kleur

  if (knipperstatus)
  {
    knipperstatus = false;
    digits[minuten] = knipperkleur;
  }
  else   // knipperminuut valt samen met uur, knipperen tussen minuut en uurkleur
  {
    knipperstatus = true;
    digits[minuten] = minuut_kleur;       // zet laatste minuutled uit
  }

  if (minuten <= 29) {
    pixels.setPixelColor(minuten + 30, pixels.Color(digits[minuten].rood, digits[minuten].groen, digits[minuten].blauw));
  }

  else
    pixels.setPixelColor(minuten - 30, pixels.Color(digits[minuten].rood, digits[minuten].groen, digits[minuten].blauw));

  pixels.show(); // toon de aangepaste pixels
}

/*****************************************************************************************************/

void doe_RGB_update()        //update alle LEDs op,alleen in setup gebruikt
{
  for (int i = 0; i < aantal_leds; i++) {
    pixels.setPixelColor(i, pixels.Color(led_test_kleur.rood, led_test_kleur.groen, led_test_kleur.blauw));
  }
  pixels.show(); // update pixels
}
