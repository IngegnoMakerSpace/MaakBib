/*

  Udp NTP Client

  Get the time from a Network Time Protocol (NTP) time server
  Demonstrates use of UDP sendPacket and ReceivePacket
  For more on NTP time servers and the messages needed to communicate with them,
  see http://en.wikipedia.org/wiki/Network_Time_Protocol

  created 4 Sep 2010 by Michael Margolis // modified 9 Apr 2012 by Tom Igoe
  updated for the ESP8266 12 Apr 2015 by Ivan Grokhotkov
  This code is in the public domain.
*/

// Aangepast en uitgebreid door Hans Caluwaerts
// www.ardlab.gent

// ArdLab 25/09/2021
// Lid van STEM-Academie

/* Getest met OSX 10.13.6 (High Sierra) & Windows 10
   Arduino IDE 1.8.11
   esp8266 versie 2.3.0 (min. versie voor ESP8266WiFiMulti)
*/

/***************************************************************************************************************/
/* FUNCTIE                                                                                                     */
/*                                                                                                             */
/* Toon de tijd op een Neopixel ring van 60 LEDS, hou automatisch rekening met zomeruur                        */
/* MULTIWIFI om 1 sketch voor meerders locaties te kunnen gebruiken                                            */
/***************************************************************************************************************/

/*********************************** importeer een bibliotheek *************************************************/

#include <Adafruit_NeoPixel.h> // importeer de TM1638 bibliotheek via het menu Schets > Include Library > Add .ZIP library
#include <ESP8266WiFiMulti.h>

#include <ESP8266WiFi.h>       // deze bibliotheek maakt standaard deel uit van de esp8266 bibliotheken.
#include <WiFiUdp.h>           // deze bibliotheek maakt standaard deel uit van de esp8266 bibliotheken.
#include <TimeLib.h>           // https://github.com/PaulStoffregen/Time
#include <Ticker.h>            // deze bibliotheek maakt standaard deel uit van de esp8266 bibliotheken.

/********************************** definitie van objecten ****************************************************/

WiFiUDP udp;                   // creer een UDP instance om UDP paketten te ontvangen
Ticker timer_NTP;              // creer een Ticker instance met naam timer_NTP
Ticker timer_toon_tijd;        // creer een Ticker instance met naam timer_toon_tijd
Ticker timer_knipper_minuut;   // creer een Ticker instance met naam timer_knipper_minuut

ESP8266WiFiMulti wifiMulti;

/********************************** definitie van constanten ****************************************************/

const char dag_van_de_week[7][10] = {"Zondag", "Maandag", "Dinsdag", "Woensdag", "Donderdag", "Vrijdag", "Zaterdag"};

const unsigned int localPort = 2390;   // lokale poort om naar UDP packets te luisteren

const int NTP_PACKET_SIZE = 48;        // NTP time stamp bevindt zich in de eerste 48 bytes van het bericht

const char* ntpServerName = "be.pool.ntp.org";  // https://www.pool.ntp.org/zone/europe

#define  PIN            D2             // pin D2 van Wemos D1 voor het aansturen van de neopixels


/********************************** definitie van variabelen ****************************************************/

// Zet geen IP address in de sketch of het voordeel van de pool vevalt.
// Zoek het IP address van de host */
// IPAddress timeServer(129, 6, 15, 28); // time.nist.gov NTP server
IPAddress timeServerIP; // lijst van 4 bytes waarin het IP adres van time.nist.gov NTP bewaard wordt

byte packetBuffer[NTP_PACKET_SIZE]; // buffer van 48 bytes voor het inkomende UDP bericht

struct RGB {   // Creer een structuur met naam RGB die bestaat uit de bytes rood, groen en blauw
  byte rood;   // Deze structuur bewaart de RGB waardes voor alle Neopixels in de ring
  byte groen;
  byte blauw;
};

//*************Editeerbare Opties ******************************


RGB Achtergrond = { 0, 0, 0};      // kleur voor neopixels die niet gebruikt woren door de tijd R,G,B = 0 = donker
RGB led_test_kleur = { 0, 0, 0};   // wordt gebruikt tijdens de LED test bij opstarten

/*********************** definitie van de variabelen *******************************/

//de secondenaanduiding kleur
RGB second_kleur = { 50, 0, 0 };     // rood

//de minutenaanduiding kleur
RGB minuut_kleur = { 0, 0, 50};      // blauw

//de uuraanduding kleur
RGB uur_kleur = { 0, 50, 0 };        // groen

RGB minuut_kleur_uit = { 0, 0, 0};   // De kleur voor de knipperende minuten LED, staat nu op uit, dus knippert blauw / uit

RGB knipperkleur;

//Start met ahtergrondkleur
RGB digits[60] = {minuut_kleur, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                  Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                  Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                  Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond,
                  Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond, Achtergrond
                 };

boolean knipperstatus;     // bewaart de status voor het knipperen van LED van de huidige minuut

int helderheid = 50;       // intensiteit van de neopixels   0-> 255 max  NIET HOGER INSTELLEN DAN 50 !!!
int aantal_leds = 60;      // aantal NeopPixles in de cirkel
byte time_out_NTP_verzoek; // teller voor time out NTP verzoek


int Wifi_time_out = 0;          // timeout teller bij inloggen op WiFi


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(aantal_leds, PIN, NEO_GRB + NEO_KHZ800);   // creer een NeopPixel instance

byte zomeruur;             // lokale tijd uur gecompenseerd met zomeruur  (0 -> 11)
byte minuten;              // lokale tijd minuten
byte seconden;             // lokale tijd seconden

bool zomertijd;               // true als zomertijdcorrectie aktief is
bool trigger_NTP;             // status voor opvragen tijd
bool trigger_toon_tijd;       // status voor tonen tijd
bool trigger_knipper_minuut;  // status voor neopixel kniperminuut
bool time_request_pending;    // true als "tijd opgevraagd maar nog geen antwoord ontvangen"
time_t nu;                    // tijd in het time_t formaat   https://en.wikibooks.org/wiki/C_Programming/time.h/time_t
/***************************************************************************************************************/

void setup()  // de "setup" functie wordt 1 keer doorlopen na opstarten of indrukken van reset
{
  Serial.begin(115200); // initialiseer de seriele communicatie tussen de nodeMCU en je computer
  //                    // zet de communicatiesnelheid op 115200 bits per seconde

  Serial.println("\nVerbinden met WiFi"); // toon de karakters tussen aanhalingstekens in seriele monitor
  Serial.println("\n Maakbib _neopix°klok_FINAL_V1.0"); // toon de karakters tussen aanhalingstekens in seriele monitor

  pixels.begin();                      //  Initialiseer de NeoPixel bibliotheek.
  pixels.setBrightness(helderheid);    // Zet de Neopixels helderheid op "helderheid"

  wifiMulti.addAP("KELDER", "slagroom");
  wifiMulti.addAP("4G WiFi ArdLab", "1234 5678");
  wifiMulti.addAP("ingegno", "ingegnofablab");
  wifiMulti.addAP("bulb", "bulbwerkhuis");
  wifiMulti.addAP("jupinew-Guest", "ingegnofablab");  // voeg zelf extra WiFi netwerken toe
  wifiMulti.addAP("1111111", "222222222");  // voeg zelf extra WiFi netwerken toe


  Serial.println("Verbinden met WiFi");    // toon de karakters tussen aanhalingstekens in seriele monitor
  while (wifiMulti.run() != WL_CONNECTED)  // zolang WiFi.status verschillend is van "WL_CONNECTED" (= 3)
  {
    LED_WiFi();
    Serial.print(".");                     // toon de karakters tussen aanhalingstekens in seriele monitor
    Serial.print("3 WiFi.status() = ");    // toon de karakters tussen aanhalingstekens in seriele monitor
    Serial.println(WiFi.status());         // toon de waarde van WiFi.status() in seriele monitor

    Wifi_time_out++;                       // verhoog Wifi_time_out met 1
    if (Wifi_time_out > 20)
      // vebinding maken duurt langer dan 10 seconden
    {
      Serial.print("4 WiFi.status() = ");  // toon de karakters tussen aanhalingstekens in seriele monitor
      Serial.println(WiFi.status());       // toon de waarde van WiFi.status() in seriele monitor
      Serial.print("\nVerbinden mislukt"); // toon de karakters tussen aanhalingstekens in seriele monitor
      break;                               // verlaat de while loop maar doe verder met void setup()
    }
  }

  timer_NTP.attach(600, doe_trigger_NTP);                           // vraag iedere 10 minuten (= 600 seconden) de tijd aan de tijdserver
  timer_toon_tijd.attach_ms(1000, doe_trigger_toon_tijd);           // toon elke seconde de nieuwe tijd op de klok
  timer_knipper_minuut.attach_ms(250, doe_trigger_knipper_minuut);  // knipper de huige minuut led 2x aan/uit per seconde

  Serial.print("\nverbonden met ");  // toon de karakters tussen aanhalingstekens in seriele monitor
  Serial.println(WiFi.SSID());      // toon SSID in de seriele monitor
  Serial.println("IP address: ");   // toon de karakters tussen aanhalingstekens in seriele monitor
  Serial.println(WiFi.localIP());   // toon het lokale IP adres in de seriele monitor

  Serial.println("Start UDP");         // toon de karakters tussen aanhalingstekens in seriele monitor
  udp.begin(localPort);                // start UDP op "localport"
  Serial.print("UDP Lockale poort: "); // toon de karakters tussen aanhalingstekens in seriele monitor
  Serial.println(udp.localPort());     // toon de lockale poort voor UDP

  trigger_NTP = true;                  // start verzoek tijd vragen in loop
  LED_test();                          // LED test voor alle LEDs
}

/****************************************************************************************************************/

void loop() // de "loop" functie wordt steeds opnieuw herhaald
{
  if (trigger_NTP) doe_NTP();   // vraag tijd aan tijdserver

  if (trigger_toon_tijd)        // verzoek om de tijd opnieuw te tonen op LEDs + check zomeruurcorrectie
  {
    // Serial.print("time_request_pending: "); // toon de karakters tussen aanhalingstekens in seriele monitor
    // Serial.println(time_request_pending);     // toon de lockale poort voor UDP

    // Serial.print("time_out_NTP_verzoek: "); // toon de karakters tussen aanhalingstekens in seriele monitor
    // Serial.println(time_out_NTP_verzoek);     // toon de lockale poort voor UDP

    zomeruur_detectie();        // check offset voor zomeruur
    doe_toon_tijd();            // toon tijd op neopixel ring
  }
  if (trigger_knipper_minuut) doe_knipper_minuut();   // knipper neopixel van huidge minuut
}

/****************************************************************************************************************/

void doe_trigger_NTP()
{
  trigger_NTP = true;   // start verzoek opvragen tijd, wordt pas gereset als er een tijd ontvangen is
}

/****************************************************************************************************************/

void doe_trigger_toon_tijd()     // opgeroepen door timer timer_toon_tijd
{
  trigger_toon_tijd = true;      // trigger actie in loop()
}

/****************************************************************************************************************/

void doe_trigger_knipper_minuut()  // opgeroepen door timer timer_knipper_minuut
{
  trigger_knipper_minuut = true;   // trigger actie in loop()
}
