// [me_UartSpeeds] usage illustration

/*
  Author: Martin Eden
  Last mod.: 2024-09-12
*/

#include <me_UartSpeeds.h>

void setup()
{
  Serial.begin(me_UartSpeeds::Arduino_Normal_Bps);

  Serial.print("[me_UartSpeeds.ino] me_UartSpeeds::Arduino_Normal_Bps is ");
  Serial.print(me_UartSpeeds::Arduino_Normal_Bps);
  Serial.print(" baud");
  Serial.println();
}

void loop()
{
}

/*
  2024-03-12
  2024-05-05
  2024-09-12
*/
