#include "holberton.h"

/**
 * _strncpy - Copies a string up to @n bytes 
 *  
 * @dest: Destination string; the src string is copied to it
 * 
 * @src: Source string; this string will be copied to the dest string
 *
 * @n: Number of bytes; this number of bytes of src is going to be copied dest
 *
 * Return : Pointer to dest 
*/

char *_strncat (char *dest,char *src, int n) {
  int i = 0;
  
  while(src[i] != '\0' && i <n )
    {
      *(dest+i) = src[i];
      i++;
    }

  while (i < n)
    {
      dest[i] = '\0';
      i ++;
            
    }

  return (dest);
}
