/*
 * IRremoteESP8266: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to ESP8266 pin 0.
 * Version 0.1 June, 2015
 * Based on Ken Shirriff's IrsendDemo Version 0.1 July, 2009, Copyright 2009 Ken Shirriff, http://arcfn.com
 */

#include <IRremoteESP8266.h>

IRsend irsend(D0); //an IR led is connected to GPIO pin 0

void setup()
{
  irsend.begin();
  Serial.begin(115200);
}

void loop() {
  Serial.println("NEC");
  irsend.sendNEC(0x20DF10EF, 32);
  delay(2000);
  /*Serial.println("Sony");
  irsend.sendSony(0xa90, 12);
  delay(2000);*/
}
