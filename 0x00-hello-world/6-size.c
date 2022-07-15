#include <stdio.h>

/**
 * main - prints sizes of c variables,
 * 
 * Return - Always 0 (no error exit code)
*/

int main (void) {
  char acharacter;
  int aninteger;
  long along;
  long long alonglong;
  float afloat;
  
  printf("Size of a char : %lu byte \n", sizeof(acharacter) );
  printf("Size of an int : %lu bytes \n", sizeof(aninteger) );
  printf("Size of a long : %lu bytes \n", sizeof(along) );
  printf("Size of long long : %lu byte \n", sizeof(alonglong) );
  printf("Size of a float : %lu byte \n", sizeof(afloat) );
  return 0;

}

