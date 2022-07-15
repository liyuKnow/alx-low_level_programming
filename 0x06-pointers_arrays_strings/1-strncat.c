#include "holberton.h"

/**
 * _strncat - concatenates n bytes of string to another string 
 *  
 * @dest: Destination string; the src string is appended to it
 * 
 * @src: Source string; this string will be appended to the dest string
 *
 * @n: Number of bytes; this number of bytes of src is added to dest string
 *
 * Return : Pointer to dest 
*/

char *_strncat (char *dest,char *src, int n) {
  int i = 0, j = 0;
  
  while(dest[i] != '\0')
    i++;

  while (src[j] != '\0' && n != j )
    {
      *(dest + i) = src[j];
      j++;
      i++;
    }

  return (dest);
}
