#include "main.h"
/**
 * _strncat - concatinating strings
 *
 * @dest: first pointer parameter
 * @src: second pointer parameter
 * @n: last parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	return (dest);
}
