#include <stdio.h>


main(){
  #define INT 1234
  #define LONG 123456789L/*suffix l is for long*/
  #define UNSIGNED_LONG 1234ul/*suffix u is for unsigned*/
  #define FLOAT 12.1
  #define UNSIGNED_FLOAT 12.1u
  #define UNSIGNED_LONG_DOUBLE 12.12ul/*u is always before l*/
  #define OCTAL 037 /*For octal values use prefix 0*/
  #define HEX 0x1F /* u and l are still usable in hex and octal*/
  #define CHARCONST_OCTAL_1 '\000' /*ascii null character in octal notation*/
  #define CHARCONST_HEX_1 '\x0' /*ascii null character in hexadecimal notation*/
}
