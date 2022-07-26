#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first pointer parameter
 * @s2: second pointer parameter
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len, limit;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (len = 0; len < i; len++)
		str[len] = s1[len];
	limit = j;
	for (j = 0; j <= limit; j++, len++)
	{
		str[len] = s2[j];
	}
	return (str);

}
