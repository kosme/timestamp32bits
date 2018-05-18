/*
        32 bits timestamp libray
        Copyright (C) 2018 Enrique Condes
*/

#ifndef timestamp32bits_h /* Prevent loading library twice */
#define timestamp32bits_h
#ifdef ARDUINO
  #if ARDUINO >= 100
    #include "Arduino.h"
  #else
    #include "WProgram.h"
  #endif
#else
  #include <stdlib.h>
  #include <stdio.h>
  #ifdef __AVR__
          #include <avr/io.h>
  #endif
  #include <math.h>
#endif

#define YEAR 31536000UL
#define DAY 86400UL
#define HOUR 3600UL
#define MINUTE 60UL

class timestamp32bits{
public:
  timestamp32bits(void);
  unsigned long timestamp(char year, char month, char day, char hour, char min, char seg);

private:
  const short days[12]={0,31,59,90,120,151,181,212,243,273,304,334};
};

#endif
