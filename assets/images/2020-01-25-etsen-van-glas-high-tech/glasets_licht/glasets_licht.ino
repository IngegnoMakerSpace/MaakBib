#include <DHT.h>  // version 1.3.1

int lichtinval;
float temperatuur;
int nachtwaarde;
int schemerwaarde;
int vallichtwaarde;
int pixelhelderheid;
boolean test;
int R;
int G;
int B;
int RNieuw;
int GNieuw;
int BNieuw;
int regenboogPos;
long tijdKleurBepaald;
long tijdNu;
float fractie;
int Rfrac;
int Gfrac;
int Bfrac;
int NeoPixel = 2;
int TempRH_Sensor = 8;
int LDR_sensor = A0;

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel myNeo_NeoPixel = Adafruit_NeoPixel(1, 2, NEO_GRB + NEO_KHZ800);
DHT myDHTTempRH_Sensor(TempRH_Sensor, DHT22);
float myDHTTempRH_SensorTemptmp = 200;
float myDHTTempRH_SensorTemp = 200;

float myDHTTempRH_Sensor_readT() {
  myDHTTempRH_SensorTemptmp = myDHTTempRH_Sensor.readTemperature(false); //read Celsius
  if (! isnan(myDHTTempRH_SensorTemptmp) ) {
    //override stored temperature only on good reading
    myDHTTempRH_SensorTemp = myDHTTempRH_SensorTemptmp;
  }
  return myDHTTempRH_SensorTemp;
}


int mathRandomInt(int min, int max) {
  if (min > max) {
    // Swap min and max to ensure min is smaller.
    int temp = min;
    min = max;
    max = temp;
  }
  return min + (rand() % (max - min + 1));
}

int ard_effect0_status = -1;
unsigned long ard_effect0_start, ard_effect0_time;
#define EFFECT0_PERIOD 1000

// uitlezen hoeveel licht er is
void lees_lichtinval() {
  //Variables of this effect are reffered to with ard_effect0
  boolean restart = false;
  ard_effect0_time = millis() - ard_effect0_start;
  if (ard_effect0_time > EFFECT0_PERIOD) {
    //end effect, make sure it restarts
    if (ard_effect0_status > -1) {
    }
    restart = true;
    ard_effect0_status = -1;
    ard_effect0_start = ard_effect0_start + ard_effect0_time;
    ard_effect0_time = 0;
  }
  if (not restart && ard_effect0_status == -1) {
    ard_effect0_status = 0;
    ard_effect0_start = ard_effect0_start + ard_effect0_time;
    ard_effect0_time = 0;
  lichtinval = analogRead(LDR_sensor);
  if (test) {
    Serial.print("Licht:");
    Serial.println(lichtinval);
  }
  }
}


int ard_effect1_status = -1;
unsigned long ard_effect1_start, ard_effect1_time;
#define EFFECT1_PERIOD 1000

// Uitlezen wat temp is
void lees_temperatuur() {
  //Variables of this effect are reffered to with ard_effect1
  boolean restart = false;
  ard_effect1_time = millis() - ard_effect1_start;
  if (ard_effect1_time > EFFECT1_PERIOD) {
    //end effect, make sure it restarts
    if (ard_effect1_status > -1) {
    }
    restart = true;
    ard_effect1_status = -1;
    ard_effect1_start = ard_effect1_start + ard_effect1_time;
    ard_effect1_time = 0;
  }
  if (not restart && ard_effect1_status == -1) {
    ard_effect1_status = 0;
    ard_effect1_start = ard_effect1_start + ard_effect1_time;
    ard_effect1_time = 0;
  temperatuur = myDHTTempRH_Sensor_readT();
  if (test) {
    Serial.print("Temp:");
    Serial.println(temperatuur);
  }
  }
}


// Helderheid bepalen.
void bepaal_helderheid() {
  /* "4 standen: nacht, schemer, vallicht, dag" */
  nachtwaarde = 600;
  schemerwaarde = 450;
  vallichtwaarde = 200;
  if (lichtinval > nachtwaarde) {
    /* "Het is nacht, licht zacht!" */
    pixelhelderheid = 80;
  } else if (lichtinval > schemerwaarde) {
    pixelhelderheid = 160;
  } else if (lichtinval > vallichtwaarde) {
    pixelhelderheid = 250;
  } else {
    /* "Het is dag, licht uit!" */
    pixelhelderheid = 0;
  }
}

int ard_effect2_status = -1;
unsigned long ard_effect2_start, ard_effect2_time;
#define EFFECT2_PERIOD 2000

// Deze functie beschrijven...
void bepaal_volgende_kleur() {
  //Variables of this effect are reffered to with ard_effect2
  boolean restart = false;
  ard_effect2_time = millis() - ard_effect2_start;
  if (ard_effect2_time > EFFECT2_PERIOD) {
    //end effect, make sure it restarts
    if (ard_effect2_status > -1) {
    }
    restart = true;
    ard_effect2_status = -1;
    ard_effect2_start = ard_effect2_start + ard_effect2_time;
    ard_effect2_time = 0;
  }
  if (not restart && ard_effect2_status == -1) {
    ard_effect2_status = 0;
    ard_effect2_start = ard_effect2_start + ard_effect2_time;
    ard_effect2_time = 0;
  tijdKleurBepaald = millis();
  R = RNieuw;
  G = GNieuw;
  B = BNieuw;
  if (pixelhelderheid == 0) {
    /* "Licht uit" */
    RNieuw = 0;
    GNieuw = 0;
    BNieuw = 0;
  } else if (temperatuur > 20) {
    /* "Te Warm - Rode kleur" */
    BNieuw = 0;
    RNieuw = mathRandomInt(1, pixelhelderheid);
    if (RNieuw < pixelhelderheid / 2) {
      /* "Kleinste waarde moet groen zijn" */
      GNieuw = RNieuw;
      RNieuw = pixelhelderheid - RNieuw;
    } else {
      GNieuw = pixelhelderheid - RNieuw;
    }
  } else if (temperatuur < 17) {
    /* "Te Koud - Blauwe kleur" */
    RNieuw = 0;
    BNieuw = mathRandomInt(1, pixelhelderheid);
    if (BNieuw < pixelhelderheid / 2) {
      /* "Kleinste waarde moet groen zijn" */
      GNieuw = BNieuw;
      BNieuw = pixelhelderheid - BNieuw;
    } else {
      GNieuw = pixelhelderheid - BNieuw;
    }
  } else {
    /* "Goede Temp - Regenboog" */
    regenboog();
  }
  }
}


// Deze functie beschrijven...
void regenboog() {
  if (regenboogPos < 85) {
    RNieuw = 3 * regenboogPos;
    GNieuw = 255 - 3 * regenboogPos;
    BNieuw = 0;
  } else if (regenboogPos < 170) {
    RNieuw = 255 - 3 * (regenboogPos - 85);
    GNieuw = 0;
    BNieuw = 3 * (regenboogPos - 85);
  } else {
    RNieuw = 0;
    GNieuw = 3 * (regenboogPos - 170);
    BNieuw = 255 - 3 * (regenboogPos - 170);
  }
  /* "Pas nu waarden aan aan gewenste helderheid" */
  RNieuw = pixelhelderheid * ((float)(RNieuw) / 255);
  GNieuw = pixelhelderheid * ((float)(GNieuw) / 255);
  BNieuw = pixelhelderheid * ((float)(BNieuw) / 255);
  regenboogPos = regenboogPos + 10;
  if (regenboogPos > 255) {
    regenboogPos = 0;
  }
}

int ard_effect3_status = -1;
unsigned long ard_effect3_start, ard_effect3_time;
#define EFFECT3_PERIOD 100

// Deze functie beschrijven...
void fadeKleur() {
  //Variables of this effect are reffered to with ard_effect3
  boolean restart = false;
  ard_effect3_time = millis() - ard_effect3_start;
  if (ard_effect3_time > EFFECT3_PERIOD) {
    //end effect, make sure it restarts
    if (ard_effect3_status > -1) {
    }
    restart = true;
    ard_effect3_status = -1;
    ard_effect3_start = ard_effect3_start + ard_effect3_time;
    ard_effect3_time = 0;
  }
  if (not restart && ard_effect3_status == -1) {
    ard_effect3_status = 0;
    ard_effect3_start = ard_effect3_start + ard_effect3_time;
    ard_effect3_time = 0;
  tijdNu = millis();
  if (tijdNu - tijdKleurBepaald > 1000) {
    /* "We tonen laatste sec de nieuwe kleur" */
    myNeo_NeoPixel.setPixelColor(1-1, myNeo_NeoPixel.Color(RNieuw,GNieuw,BNieuw));
    myNeo_NeoPixel.show();
  } else {
    /* "Fade van oude naar nieuwe kleur" */
    fractie = (float)(tijdNu - tijdKleurBepaald) / 1000;
    Rfrac = (1 - fractie) * R + fractie * RNieuw;
    Gfrac = (1 - fractie) * G + fractie * GNieuw;
    Bfrac = (1 - fractie) * B + fractie * BNieuw;
    myNeo_NeoPixel.setPixelColor(1-1, myNeo_NeoPixel.Color(Rfrac,Gfrac,Bfrac));
    myNeo_NeoPixel.show();
  }
  }
}



void setup() {
  myNeo_NeoPixel.begin();
  myNeo_NeoPixel.show();
  myDHTTempRH_Sensor.begin();
  pinMode(LDR_sensor, INPUT);
  Serial.begin(9600);
  ard_effect0_status = -1;
  ard_effect0_start = millis();

  ard_effect1_status = -1;
  ard_effect1_start = millis();

  ard_effect2_status = -1;
  ard_effect2_start = millis();

  ard_effect3_status = -1;
  ard_effect3_start = millis();


  lichtinval = analogRead(LDR_sensor);
  temperatuur = myDHTTempRH_Sensor_readT();
  test = true;
  R = 0;
  G = 0;
  B = 0;
  RNieuw = 0;
  GNieuw = 0;
  BNieuw = 0;
  regenboogPos = 0;
  myNeo_NeoPixel.setPixelColor(1-1, myNeo_NeoPixel.Color(R,G,B));
  myNeo_NeoPixel.show();

}

void loop() {
  lees_lichtinval();
  lees_temperatuur();
  bepaal_helderheid();
  bepaal_volgende_kleur();
  fadeKleur();

}