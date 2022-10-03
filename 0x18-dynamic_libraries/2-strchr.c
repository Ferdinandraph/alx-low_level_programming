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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (0);
}
