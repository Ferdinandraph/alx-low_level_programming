#include "main.h"
/**
 * cap_string - capitalizing strings
 *
 * @s: first parameter
 * Return: void
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
			if (s[i] == 32 || s[i] == 33 || s[i] == 34 || s[i] == 4
					0 || s[i] == 41 || s[i] == 125 || s[i] 
					== 123 || s[i] == 59 || s[i] == 44 || s
					[i] == 9 || s[i] == 10 || s[i] == 46 ||
					s[i] == 63)
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
