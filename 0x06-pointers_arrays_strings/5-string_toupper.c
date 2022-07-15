#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string into an upper case 
 *  
 * @str: a string 
 *
 *
 * Return : string;  all in upper case
*/

char reverse_array (char *str) {
  int i;
  
  for (i =0;str[i] != '\0'; i++)
    {
      if (str[i] >= 97 && srt[i] <= 122 )
	{
	  str[i] = str[i] -32;
	}
    }

  return (str);
}
