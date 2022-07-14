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
	int j = 0;
	int m = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[m] && m < n)
	{
		dest[j] = src[m];
		m++;
	}
	return (dest);
}
