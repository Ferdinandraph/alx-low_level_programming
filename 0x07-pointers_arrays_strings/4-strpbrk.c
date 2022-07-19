#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searching a string of any set of byte
 *
 * @s: first pointer parameter
 * @accept: second pointer parameter
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
