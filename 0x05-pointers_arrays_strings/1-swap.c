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

	i = *a;
	*a = *b;
	i = *b;
}
