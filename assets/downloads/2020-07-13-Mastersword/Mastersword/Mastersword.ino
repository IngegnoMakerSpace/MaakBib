#include <Adafruit_GFX.h> // version 1.3.6
#include <Adafruit_ST7735.h> // version 1.2.7
#include <SPI.h>

boolean Drukken;
int X_waarde;
int Y_waarde;
int horizontale_richting;
int verticale_richting;
int Xpos;
int Ypos;
boolean wandel;
int Xpos_oud;
int Ypos_oud;
int Joystick_druk = 0;
int Joystick_X = A0;
int Joystick_Y = A0;

boolean Joystick_druk_PRESSED = LOW;


// Connect TFT1_7 to Arduino Nano - Vcc & GND, LED to 3.3V,
// SDA pin to NANO pin 11 (MOSI)
// SDO pin to NANO pin 12 (MISO)
// SCK pin to NANO pin 13 (SCK)
#define TFT1_7_CS     10 // CS pin to NANO pin 10
#define TFT1_7_RST    8  // RST (RESET) pin to NANO pin 8
#define TFT1_7_DC     9  // AO or D/C pin to NANO pin 9

Adafruit_ST7735 TFT1_7 = Adafruit_ST7735(TFT1_7_CS,  TFT1_7_DC, TFT1_7_RST);


void TFT1drawtext(String text, uint16_t color, int size, int x, int y) {
  TFT1.setCursor(x, y);
  TFT1.setTextColor(color);
  TFT1.setTextSize(size);
  TFT1.setTextWrap(true);
  TFT1.println(text);
}

static unsigned int Vlinder8x8[] =
{ TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0x00, 0x00, 0x00), TFT1.color565(0x00, 0x00, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00),
TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00),
TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00),
TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0x66, 0x66, 0x66),
TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66),
TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00),
TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00),
TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0xff, 0xff, 0x00), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0x66, 0x66, 0x66), TFT1.color565(0xff, 0xff, 0x00)
};

#define VlinderW            8     // sprite width
#define VlinderH            8     // mario height
#define VlinderW2           4     // half width
#define VlinderH2           4     // half height
unsigned char Vlinderpx, Vlinderpy;


// ----------------------
// draw Sprites variables
// ----------------------
// temporary x and y var
static short TFT1tmpx, TFT1tmpy, TFT1tmps1, TFT1tmps2;



// Deze functie beschrijven...
void lees_joystick() {
  Drukken = (digitalRead(Joystick_druk) == Joystick_druk_PRESSED);
  X_waarde = analogRead(Joystick_X);
  Y_waarde = analogRead(Joystick_Y);
  horizontale_richting = 0;
  if (X_waarde < 480) {
    horizontale_richting = 1;
  } else if (X_waarde > 520) {
    horizontale_richting = -1;
  }
  verticale_richting = 0;
  if (Y_waarde < 480) {
    verticale_richting = -1;
  } else if (Y_waarde > 520) {
    verticale_richting = 1;
  }
}


void setup() {
  pinMode(Joystick_druk, INPUT_PULLUP);
  pinMode(Joystick_X, INPUT);
  pinMode(Joystick_Y, INPUT);
  TFT1_7.initR(INITR_BLACKTAB);

  TFT1.fillScreen(TFT1.color565(0x66, 0x66, 0x66) );
  TFT1drawtext("Retro", TFT1.color565(0xff, 0x00, 0x00), 3, 30, 5);
  delay(500);
  TFT1drawtext("Games", TFT1.color565(0xff, 0x00, 0x00), 3, 30, 60);
  while (!(digitalRead(Joystick_druk) == Joystick_druk_PRESSED)) {
  }
  TFT1.fillScreen(TFT1.color565(0x66, 0x66, 0x66) );
  Xpos = 60;
  Ypos = 60;

  // draw sprite
  // ---------------
  TFT1tmpx = VlinderW - 1; //width sprite
  do {
    Vlinderpx = Xpos + 2 * TFT1tmpx;
    // draw Vlinder at new position
    TFT1tmpy = VlinderH - 1;
    do {
      Vlinderpy = Ypos + 2 * TFT1tmpy ;
      TFT1tmps1 = 2 - 1; //scale
      do {
        TFT1tmps2 = 2 - 1; //scale
        do {
          TFT1.drawPixel(Vlinderpx + TFT1tmps1, Vlinderpy + TFT1tmps2, Vlinder8x8[TFT1tmpx + (TFT1tmpy * VlinderW)]);
          } while (TFT1tmps2--);
      } while (TFT1tmps1--);
    } while (TFT1tmpy--);
  } while (TFT1tmpx--);

  delay(3000);

}

void loop() {
  lees_joystick();
  wandel = false;
  Xpos_oud = Xpos;
  Ypos_oud = Ypos;
  Xpos = Xpos + horizontale_richting;
  Ypos = Ypos + verticale_richting;
  if (Xpos != Xpos_oud || Ypos != Ypos_oud) {
    wandel = true;
    TFT1.drawRect(Xpos_oud, Ypos_oud, 16, 16, TFT1.color565(0x66, 0x66, 0x66));
    /* "Corrigeren om scherm niet te verlaten" */
    /* "scherm is 128x160" */
    if (Xpos < 0) {
      Xpos = 0;
    } else if (Xpos > 112) {
      Xpos = 112;
    }
    if (Ypos < 0) {
      Ypos = 0;
    } else if (Ypos > 144) {
      Ypos = 144;
    }

    // draw sprite
    // ---------------
    TFT1tmpx = VlinderW - 1; //width sprite
    do {
      Vlinderpx = Xpos + 2 * TFT1tmpx;
      // draw Vlinder at new position
      TFT1tmpy = VlinderH - 1;
      do {
        Vlinderpy = Ypos + 2 * TFT1tmpy ;
        TFT1tmps1 = 2 - 1; //scale
        do {
          TFT1tmps2 = 2 - 1; //scale
          do {
            TFT1.drawPixel(Vlinderpx + TFT1tmps1, Vlinderpy + TFT1tmps2, Vlinder8x8[TFT1tmpx + (TFT1tmpy * VlinderW)]);
            } while (TFT1tmps2--);
        } while (TFT1tmps1--);
      } while (TFT1tmpy--);
    } while (TFT1tmpx--);

    /* "10 stappen per sec max" */
    delay(100);
  }

}
