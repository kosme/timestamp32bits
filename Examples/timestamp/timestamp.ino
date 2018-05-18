/*
Simple example that generates a timestamp from the information provided.
*/

#include "timestamp32bits.h"

timestamp32bits stamp = timestamp32bits();

void setup() {
  Serial.begin(115200);
  //timestamp paramaters order is (year, month, day, hour, minute, second)
  Serial.println(stamp.timestamp(18,10,11,11,22,33)); //It should print 1539256953
  while(1);
}

void loop() {
  // put your main code here, to run repeatedly:

}
