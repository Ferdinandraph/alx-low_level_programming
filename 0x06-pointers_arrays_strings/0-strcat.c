#include "main.h"
/**
 * _strcat - concatinating two values
 *
 * @dest: first parameter
 * @src: second parameter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;
	while (src[i] >= 0)
	{
		if (src[i] == '\0')
			break;
		dest[len + i] = src[i];
		len++;
		i++;
	}
	return (dest);
}
