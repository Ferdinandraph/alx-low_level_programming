#include "main.h"
/**
 * array_range -  function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, len;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
