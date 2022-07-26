#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - allocate space memory
 * @str: pointer character
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *duplicate_num;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	duplicate_num = (char *)malloc(sizeof(char) * (length + 1));
	if (duplicate_num == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		duplicate_num[i] = str[i];
	}
	return (duplicate_num);
}
