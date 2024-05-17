// Named UART speeds

/*
  Well, I don't like remembering 57600. Or 115200. Or 9600.

  So I prefer named constants:

    Arduino_Normal_Bps
    Esplora_Normal_Bps
    Arduino_Failsafe_Bps

  Of course in your code you need

    #include <me_UartSpeeds.h>
    ...
    Serial.begin(me_UartSpeeds::Arduino_Normal_Bps);

  instead of

    Serial.begin(57600);

  Choice is yours, there are no policies, just possibilities.
*/

/*
  Author: Martin Eden
  Last mod.: 2024-05-17
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_UartSpeeds
{
  using namespace me_BaseTypes;

  enum StandardSpeeds:TUint_4
  {
    Bps_300 = 300,
    Bps_600 = 600, // == prev * 2
    Bps_1200 = 1200, // ditto
    Bps_2400 = 2400,
    Bps_4800 = 4800,
    Bps_9600 = 9600,
    Bps_19200 = 19200,
    Bps_38400 = 38400,
    Bps_57600 = 57600, // ha-ha: == prev * 1.5
    Bps_115200 = 115200, // == prev * 2
    Bps_230400 = 230400, // ditto
    Bps_460800 = 460800,
    Bps_921600 = 921600
  };

  const StandardSpeeds Arduino_Failsafe_Bps = Bps_9600;
  const StandardSpeeds Arduino_Normal_Bps = Bps_57600;
  const StandardSpeeds Esplora_Normal_Bps = Bps_115200;
}

/*
  2024-03-12
  2024-04-09
*/
