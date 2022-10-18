#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @a : an array of int to reverse
 * @n : the length of the array
 *
 */
void reverse_array(int *a, int n)
{
	int j;
	int i = 0;

	n = n - 1;
	while (i < n)
	{
		j = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = j;
		i++;
		n--;
	}
}
