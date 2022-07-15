#include "main.h"
/**
 * rot13 - encode string
 *
 * @str: first parameter
 * Return: str
 */
char *rot13(char *str)
{
	int i = 0, j;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}
