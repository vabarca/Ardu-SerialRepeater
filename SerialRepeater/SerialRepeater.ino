
#include "SoftwareSerial.h"

/*
#ifdef _SS_MAX_RX_BUFF
#undef _SS_MAX_RX_BUFF 
#define _SS_MAX_RX_BUFF 128
#endif
*/


SoftwareSerial  mySerial(2,3); // pin 2 = TX, pin 3 = RX (unused)

void setup()
{
  Serial.begin(115200);
  mySerial.begin(57600);
}

void loop()
{
  if (mySerial.available())
    Serial.print((char)mySerial.read());
  if (Serial.available())
    mySerial.print((char)Serial.read());
}