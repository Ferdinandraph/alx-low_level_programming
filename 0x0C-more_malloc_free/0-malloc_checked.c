#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: first parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b * sizeof(int));
	if (ptr = NULL)
		exit(98);
	return (ptr);
}
