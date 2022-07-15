#include "main.h"
/**
 * reverse_array - reversing of array
 *
 * @a: pointer parameter
 * @n: last parameter
 */
void reverse_array(int *a, int n)
{
	int i;
	int ch;

	for (i = 0; i < n/2; i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
	}
}
