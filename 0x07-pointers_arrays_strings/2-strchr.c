#include "main.h"
/**
 * _strchr - a function that locates a charater in a string
 *
 * @s: pointer parameter
 * @c: character parameter
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}
	return (0);
}
