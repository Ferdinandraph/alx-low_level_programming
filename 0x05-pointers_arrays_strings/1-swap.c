#include "main.h"
/**
 * swap_int - swaping two integer value
 *
 * @a: first argument
 * @b: second argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	*a = 20;
	*b = 10;
	i = *a;
	*a = *b;
	i = *b;
}
