#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatinanting two strings
 * @s1: first parameter pointer
 * @s2: second parameter pointer
 * @n: n parameter
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x1, x2, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x1 = 0; s1[x1]; x1++)
		;
	for (x2 = 0; s1[x2]; x2++)
		;
	if (x2 > n)
		x2 = n;
	str = malloc(x2 + x1 + 1 * sizeof(char));
	if (str == NULL)
		return ('\0');
	for (i = 0; i < x1; i++)
	{
		str[i] = x1[i];
	}
	for (i = 0; i < x2; i++)
	{
		str[x1 + i] = x2[i];
	}
	str[x1 + x2] = '\0';
	return (str);
}
