#include <Arduino.h>
#include <FastLED.h>

#define NUM_LED 1
#define BLINK_LED_DELAY 500

CRGB leds[40];

void blink_led(CRGB::HTMLColorCode color)

{
  leds[0] = color;
  FastLED.show();
  delay(BLINK_LED_DELAY);

}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  FastLED.addLeds<NEOPIXEL,48> (leds ,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink_led(CRGB::Green);
  blink_led(CRGB::Red);
  blink_led(CRGB::Amethyst);
  blink_led(CRGB::AntiqueWhite);
  blink_led(CRGB::Aqua);
  blink_led(CRGB::Aquamarine);
  blink_led(CRGB::Azure);
  blink_led(CRGB::Beige);
  blink_led(CRGB::Bisque);
  blink_led(CRGB::Black);
  blink_led(CRGB::BlanchedAlmond);
  blink_led(CRGB::Blue);
  blink_led(CRGB::BlueViolet);
  blink_led(CRGB::Brown);
  blink_led(CRGB::BurlyWood);
  blink_led(CRGB::CadetBlue);
  blink_led(CRGB::Chartreuse);
  blink_led(CRGB::Chocolate);
  blink_led(CRGB::Coral);
  blink_led(CRGB::CornflowerBlue);
  blink_led(CRGB::Cornsilk);
  blink_led(CRGB::Crimson);
  blink_led(CRGB::Cyan);
  blink_led(CRGB::DarkBlue);
  blink_led(CRGB::DarkCyan);
  blink_led(CRGB::DarkGoldenrod);
  blink_led(CRGB::DarkGray);
  blink_led(CRGB::DarkGrey);
  blink_led(CRGB::DarkGreen);
  blink_led(CRGB::DarkKhaki);
  blink_led(CRGB::DarkMagenta);
  blink_led(CRGB::DarkOliveGreen);
  blink_led(CRGB::DarkOrange);
  blink_led(CRGB::DarkOrchid);
}