// [me_UartSpeeds] usage illustration

/*
  Author: Martin Eden
  Last mod.: 2024-10-29
*/

#include <me_UartSpeeds.h>

void setup()
{
  long Speed_Bps = me_UartSpeeds::Bps_57k;

  Serial.begin(Speed_Bps);

  Serial.print("[me_UartSpeeds] Our communication speed is ");
  Serial.print(Speed_Bps);
  Serial.print(" baud.");
  Serial.println();

  Serial.println("[me_UartSpeeds] Done.");
}

void loop()
{
}

/*
  2024-03-12
  2024-05-05
  2024-09-12
  2024-10-29
*/
