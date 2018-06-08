#include <stdio.h>

strlen(char s[]){
  int i = 0;
  while(s[i] != '\0')
    ++i;
    return i;
}

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      printf("%d\n", strlen(argv[1]));
   }
   else if( argc > 2 ) {
     int i;
     for (i = 1; i < argc; i++){
       printf("%d\n",strlen(argv[i]));
     }
   }
   else {
     printf("Error: No argument is supplied");
   }
}
