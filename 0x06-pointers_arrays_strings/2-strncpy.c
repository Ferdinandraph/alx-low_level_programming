#include "main.h"
/**
 * _strncpy - copying strings
 *
 * @dest: first pointer
 * @src: last pointer
 * @n: last parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; src[i] && i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
