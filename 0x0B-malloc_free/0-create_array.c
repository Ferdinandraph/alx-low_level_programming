#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and initializes it.
 * @size: size of array
 * @c: character value
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	unsigned int i;
	char *cr;

	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}
	return (cr);
}
