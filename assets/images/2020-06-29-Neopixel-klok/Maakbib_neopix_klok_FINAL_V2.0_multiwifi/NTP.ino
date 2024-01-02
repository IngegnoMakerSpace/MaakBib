void doe_NTP()   // vraag tijd aan tijdserver en volg antwoord op
{
  //Serial.print("doe_NTP() "); // toon de karakters tussen aanhalingstekens in seriele monitor

  if (!time_request_pending)  // er is geen pending verzoek voor de tijd
  {
    time_request_pending = true; // set status, verzend verzoek naar tijdserver
    WiFi.hostByName(ntpServerName, timeServerIP);   // vraag een IP adres van een timeserver
    sendNTPpacket(timeServerIP); // stuur een NTP pakket naar de time server op het verkregen IP adres
  }
  else
  {
    int data_ontvangen = udp.parsePacket();  // controleer of er een pakket ontvangen is en rapporteer de grootte van het pakket
    if (!data_ontvangen)                     // pakketgrootte verschillend van 0 ?
    {
      delay(10);
      time_out_NTP_verzoek ++;               // verhoog time out teller
      if (time_out_NTP_verzoek > 10)         // wachten duurt te lang
      { 
        time_out_NTP_verzoek = 0;            // reset time out teller
        time_request_pending = false;        // sta nieuw verzoek toe
      }
      Serial.println("nog geen pakket ontvangen"); // toon de karakters tussen aanhalingstekens in seriele monitor
    }
    else
    {
      time_request_pending = false;  // antoord ontange, is niet meer pending
      time_out_NTP_verzoek = 0;      // reset time out teller

      trigger_NTP = false;           // niet meer pollen voor antwoord via loop
      Serial.print("pakket ontvangen, lengte = "); // toon de karakters tussen aanhalingstekens in seriele monitor
      Serial.println(data_ontvangen);              // toon de waarde van data_ontvangen in de seriele monitor, moet 48 zijn
      udp.read(packetBuffer, NTP_PACKET_SIZE);     // kopieer het pakket (info over de tijd = timestamp) in de pakketbuffer

      // de timestamp start bij byte 40 van het ontvangen pakket en is 4 bytes (of 2 woorden) lang
      // eerst worden de 2 woorden afgezonderd

      unsigned long hoogWord = word(packetBuffer[40], packetBuffer[41]); // bewaar posities 40 en 41 van de pakketbfffer in hoogWord
      unsigned long laagWord = word(packetBuffer[42], packetBuffer[43]); // bewaar posities 42 en 43 van de pakketbfffer in laagWord

      Serial.println("------------------------------------------------------"); // toon de karakters tussen aanhalingstekens in seriele monitor

      //   Serial.print("hoogWord / laagWord = "); // toon de karakters tussen aanhalingstekens in seriele monitor
      //   Serial.print(hoogWord, BIN);            // toon de waarde van hoogWord in de seriele monitor in binair formaat
      //   Serial.println(laagWord, BIN);

      // voeg de 4 bytes (2 woorden) samen in een long integer
      // dit is de NTP tijd (= seconden sinds 1 Januari 1900)

      unsigned long seconden_sinds_1900 = hoogWord; // bewaar hoogWord in seconden_sinds_1900
      //  Serial.print("seconden_sinds_1900 = ");       // toon de karakters tussen aanhalingstekens in seriele monitor
      //  Serial.print("0000000000000000");             // Seriele monitor toont geen leading zeros, zelf toeveogen om leesbaarheid te verbeteren
      //  Serial.println(seconden_sinds_1900, BIN);     // toon de waarde van seconden_sinds_1900 in binair formaat in de serieell monitor

      seconden_sinds_1900 = seconden_sinds_1900 << 16 ; // schuif de data seconden_sinds_1900 in 16 posities naar links
      //  Serial.print("seconden_sinds_1900 = ");           // toon de karakters tussen aanhalingstekens in seriele monitor
      //  Serial.println(seconden_sinds_1900, BIN);         // toon de waarde van seconden_sinds_1900 in binair formaat in de seriele monitor

      seconden_sinds_1900 = seconden_sinds_1900 | laagWord; // bitwise or van de data in seconden_sinds_1900 met laagWord
      //   Serial.print("seconden_sinds_1900 = ");               // toon de karakters tussen aanhalingstekens in seriele monitor
      //   Serial.println(seconden_sinds_1900, BIN);             // toon de waarde van seconden_sinds_1900 in binair formaat in de seriele monitor

      // 4 bytes bewaren in 1 long kon ook in 1 lijn code uitgevoerd worden, zie code in volgende lijn
      // seconden_sinds_1900 = hoogWord << 16 | laagWord;

      //Serial.println("------------------------------------------------------"); // toon de karakters tussen aanhalingstekens in seriele monitor

      // dit is de tijd die ontvagen werd van de tijdserver (= seconden sinds 1 Januari 1900):

      Serial.print("Seconden sinds 1 Januari 1900 = " );     // toon de karakters tussen aanhalingstekens in seriele monitor
      Serial.println(seconden_sinds_1900);                   // toon de waarde van seconden_sinds_1900 in de seriele monitor

      // converteer NTP tijdme naar Unix tijd  https://www.unixtimestamp.com/index.php
      // Unix tijd start op 1 Januari 1970, NTP tijd start op 1 Januari 1900   http://www.ntp.org/ntpfaq/NTP-s-algo.htm  zie §5.1.2.3
      // Het verschil tussen NTP tijd en UNIX tijd bedraagt 2208988800 seconden

      const unsigned long zeventig_jaar = 2208988800UL; // aantal seconden in een jaar

      // trek van de time server tijd zeventig jaar af (in seconden!)
      // pas de tijd aan aan de lokale tijdzone door er 3600 seconden bij te tellen
      // tel 1 seconde bij vertraging door sketch te compenseren

      unsigned long epoch = seconden_sinds_1900 - zeventig_jaar + 3600 + 1; // aanpassen aan lokale tijd zonder zomeruur + 1 seconde reactietijd sketch

      // testdata om zomeruurcompensatie te testen
      //epoch = 1585447195;    // 29/03/2020 01:59:55 om zomeruur te testen = 10 seconden voor start zomeruur 02->03 uur
      //epoch = 1603591195;    // 25/10/2020 02:59:55 om einde zomeruur te testen = 10 seconden voor einde zomeruur 03->02 uur
      // Serial.print("\nUnix tijd = seconden sinds 1 januari 1970 = ");  // toon de karakters tussen aanhalingstekens in seriele monitor
      // Serial.println(epoch);                                           // toon de waarde van epoch in de seriele monitor + lokale tijd correctie


      // https://www.tutorialspoint.com/c_standard_library/c_function_time.htm
      nu = epoch;      // bewaar de epoch in het time_t formaat dat door de TimeLib bibliotheek gebruikt wordt.
      setTime(nu);     // zet interne klok juist om zomertijd te kunnen bereken

      zomeruur_detectie();  // doe een check voor zomeruur


      // vanaf nu kan je gebruik maken van de TimeLib library om te werken met uren, minuten, seconden, dag, maand, jaar en dag van de week

      Serial.print("\nHet is vandaag ");
      Serial.print(dag_van_de_week[weekday() - 1]);  // toon de naam van de dag van de week in de seriele monitor
      Serial.print(" ");
      print_tijd(day());             // huidige dag       (01-31)
      Serial.print("-");
      print_tijd(month());           // huidige maand     (01-12)
      Serial.print("-");
      Serial.print(year());          // huidige jaar: (2020, 2021, ...)
      Serial.print(", ");
      print_tijd(zomeruur);          // huidige uur       (00-23) rekening houdend met zomeruur
      Serial.print(":");
      print_tijd(minute());          // huidige minuut    (00-59)
      Serial.print(":");
      print_tijd(second());          // huidige second    (00-59)
      Serial.println(".");

      Serial.print(dag_van_de_week[weekday() - 1]); // toon de naam van de dag van de week in de seriele monitor
      Serial.print(" is de ");
      Serial.print(weekday());                      // dag van de week (1-7), Zondag is dag 1e
      Serial.println("e dag van de week.");
    }
  }
}

/****************************************************************************************************************/

void zomeruur_detectie()
{
  // voor zomeruurcorrectie wordt de aangepast ntp server tijd gebuikt  (+ 3600 seconden) dat is de zijd zonder zomeruurcorrectie.
  // laatste zondag van maart berekenen (= begindatum_zomeruur  = 3600 seconden bijtellen))
  // formule om de datum van de maand te berekenen voor begin zomeruur

  zomertijd = false;     // reset zomertijd status en controleer opnieuw of er zomertijdcorrectoe nodig is

  int begindatum_zomeruur =  (31 - (5 * (year()) / 4 + 4) % 7);
  //Serial.print("begindatum_zomeruur = ");
  //Serial.print(begindatum_zomeruur);
  //Serial.println(" maart");

  const int beginmaand_zomeruur = 3;

  // laatste zondag van oktober berekenen (= einddatum_zomeruur)
  // formule om de datum van de maand te berekenen voor einde zomeruur
  int einddatum_zomeruur = (31 - (5 * (year()) / 4 + 1) % 7);

  // Serial.print("einddatum_zomeruur = ");
  //Serial.print(einddatum_zomeruur);
  //Serial.println(" oktober");
  const int eind_maand_zomeruur = 10;

  // zomeruur is aktief wanneer aan volgende voorwaarden voldaan is
  //  && betekent "en"  || betekent "of"
  if
  (( (month() > beginmaand_zomeruur) && (month() < eind_maand_zomeruur))
      || ((month() == beginmaand_zomeruur) && ((day()) >= begindatum_zomeruur) && (hour() >= 2))
      || ((month() == eind_maand_zomeruur) && ((day()) <= einddatum_zomeruur) && (hour() < 2))
  )
  {
    //Serial.println("Zomertijd");      // toon de karakters tussen aanhalingstekens in seriele monitor
    zomertijd = true;                    // zomertijd is aktief
    zomeruur = hour() + 1 ;              // zomeruur = 1 uur bijtellen
    if (zomeruur > 23) zomeruur = 0;     // controleer op overflow
  }
  else
  {
    zomertijd = false;                 // zomertijd is aktief
    zomeruur = hour();                 // zomertijd is niet aktief, 1 uur bijtellen bij tijd van NTP server voor tijdszone
    Serial.println("Geen zomertijd");  // toon de karakters tussen aanhalingstekens in seriele monitor
  }
}
/****************************************************************************************************************/

void print_tijd(byte tijd)    // print een leading zero indien nodig
{
  if (tijd < 10) Serial.print("0");
  Serial.print(tijd);
}

/****************************************************************************************************************/

// verstuur een NTP verzek naar de NTP vserver op het meegegeven adres
unsigned long sendNTPpacket(IPAddress & address)
{
  Serial.println("verstuur een NTP packet...");
  // reset alle bytes in de buffer naar 0
  memset(packetBuffer, 0, NTP_PACKET_SIZE);

  // Initialiseer de vereiste waardes voor een NTP verzoek
  // http://en.wikipedia.org/wiki/Network_Time_Protocol
  packetBuffer[0] = 0b11100011;   // LI, Version, Mode
  packetBuffer[1] = 0;     // Stratum, or type of clock
  packetBuffer[2] = 6;     // Polling Interval
  packetBuffer[3] = 0xEC;  // Peer Clock Precision
  // 8 bytes of zero for Root Delay & Root Dispersion
  packetBuffer[12]  = 49;
  packetBuffer[13]  = 0x4E;
  packetBuffer[14]  = 49;
  packetBuffer[15]  = 52;

  // alle NTP velden hebben de vereiste waarde, stuur nu een verzoek
  udp.beginPacket(address, 123);             // NTP verzoek over poort 123
  udp.write(packetBuffer, NTP_PACKET_SIZE);  // verstuur pakket
  udp.endPacket();                           // vertuur einde pakket
}
