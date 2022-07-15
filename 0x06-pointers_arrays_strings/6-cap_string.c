#include "main.h"
/**
 * cap_string - capitalizing strings
 *
 * @s: first parameter
 * Return: void
 */
char *cap_string(char *s)
{
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
			if (s[i] == sep_words)
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}

	}
	return (0);
}
