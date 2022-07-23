#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: destination to where the memory area is stored
 * @src: source from where the memory area is located
 * @n: unsigned int n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
