# timestamp32bits
Generate 32 bits timestamps using UNIX format.

A library for calculating UNIX-like timestamps for dates AFTER January 1, 1970.

### API

##### unsigned long timestamp(char year, char month, char day, char hour, char min, char seg)
* year: number ranging from 0 to 99.
* month: number ranging from 1 to 12.
* day: number ranging from 1 to 31.
* hour: number in 24 hour format ranging from 0 to 23.
* min: number ranging from 0 to 59.
* seg: number ranging from 0 to 59.
