#include "timestamp32bits.h"

timestamp32bits::timestamp32bits(void){

}

unsigned long timestamp32bits::timestamp(char year, char month, char day, char hour, char min, char seg){
  unsigned long _timestamp=(year+30)*YEAR;
  _timestamp+=(day+days[month-1]+((year+32)/4)-1)*DAY;
  _timestamp+=hour*HOUR;
  _timestamp+=min*MINUTE;
  _timestamp+=seg;
  if((year%4==0)&&(month<3)){
    return _timestamp-DAY;
  }
  return _timestamp;
}
