#include "main.h"
/**
 * _strstr - comparing to get the substring
 *
 * @haystack: the first pointer parameter
 * @needle: substring pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle == 0)
		return (haystack);
	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[j] == needle[i])
			{
				return (haystack);
			}
		}
	}
	return (0);
}
