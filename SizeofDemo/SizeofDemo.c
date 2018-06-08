#include <stdio.h>
main(){
  char CHAR;
  int INT;
  float FLOAT;
  short SHORT;
  long LONG;
  printf("Size of CHAR is %d bits.\n",sizeof(CHAR)*8);
  printf("Size of INT is %d bits.\n",sizeof(INT)*8);
  printf("Size of FLOAT is %d bits.\n",sizeof(FLOAT)*8);
  printf("Size of SHORT is %d bits.\n",sizeof(SHORT)*8);
  printf("Size of LONG is %d bits.\n",sizeof(LONG)*8);
}
