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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
