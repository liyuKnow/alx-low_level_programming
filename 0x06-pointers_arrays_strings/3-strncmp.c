#include "holberton.h"

/**
 * _strncmp - Compares two strings @s1 and @s2 
 *  
 * @s1: First string
 * 
 * @s2: Second string
 *
 *
 * Return : boolean; 0 if @s1 and @s2 are equal, else another number 
*/

char _strncmp (char *s1,char *s2) {
  int i = 0, check = 0;
  
  while(check == 0 )
    {
      if ((*(s1 +i) == '\0') && (*(s2 +i) =="\0")
      {
	  break;
       }
      check = *(s1+i) - *(s2=i)
      i++;
    }

  while (i < n)
    {
      dest[i] = '\0';
      i ++;
            
    }

  return (dest);
}
