#include "main.h"

/**
 * reverse_array - reverses int elements of an array 
 *  
 * @a : an array of integers
 * 
 * @n the number of elements to swap
 *
 *
 * Return : No returns 
*/

char reverse_array (int *a,int n) {
  int i, j , temp;
  
  for (i =0; j = (n-1); i++; j--)
    {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
}
