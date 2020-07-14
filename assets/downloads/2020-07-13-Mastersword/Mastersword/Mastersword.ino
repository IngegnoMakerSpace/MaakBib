#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 9
#define PIN2 10
#define NUMPIXELS 41
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
const int button1Pin = 4;
const int button2Pin = 8;
const int button3Pin = 12;
boolean button2Pressed = false;
boolean button3Pressed = false;
int color = 0;
uint32_t currentColor = pixels.Color(0, 0, 255);
void setup() {
    #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
    #endif
    pinMode(button1Pin, INPUT_PULLUP);
    pinMode(button2Pin, INPUT_PULLUP);
    pinMode(button3Pin, INPUT_PULLUP);
    pixels.begin();
    pixels.setBrightness(50);
    pixels2.begin();
    pixels2.setBrightness(50);
}
void loop() {
    if (color == 0 ) {
        currentColor = pixels.Color(0, 0, 255);
    }
    else if (color == 1 ) {
        currentColor = pixels.Color(255, 0, 0);
    }
    else if (color == 2 ) {
        currentColor = pixels.Color(0, 255, 0);
    }
    else if (color == 3 ) {
        currentColor = pixels.Color(100, 100, 0);
    }
    else if (color == 4 ) {
        currentColor = pixels.Color(0, 255, 255);
    }
    else if (color == 5 ) {
        currentColor = pixels.Color(100, 0, 100);
    }
    else if (color == 6 ) {
        currentColor = pixels.Color(100, 100, 100);
    }
    if (digitalRead(button1Pin) != LOW) {
        for (int i = 0; i < NUMPIXELS; i++) {
            pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.
            pixels2.setPixelColor(i, pixels2.Color(0, 0, 0)); // Moderately bright green color.
            pixels.show(); // This sends the updated pixel color to the hardware.
            pixels2.show();
        }
    } else {
        for (int i = 0; i < NUMPIXELS; i++) {
            pixels.setPixelColor(i, currentColor); // Moderately bright green color.
            pixels2.setPixelColor(i, currentColor); // Moderately bright green color.
            pixels.show();
            pixels2.show();
            delay(10);
            if(digitalRead(button1Pin) != LOW){
                break;
            }
        }
    }
    if (digitalRead(button2Pin) == LOW && button2Pressed == false) {
        button2Pressed = true;
        color--;
        if (color <= -1) {
            color = 7;
        }
    } else {
        button2Pressed = false;
    }
    if (digitalRead(button3Pin) == LOW && button3Pressed == false) {
        button3Pressed = true;
        color++;
        if (color >= 7) {
            color = 0;
        }
    }
    else {
        button3Pressed = false;
    }
}
