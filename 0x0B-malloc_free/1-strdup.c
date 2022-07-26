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
	int i = 0, length = 0;

	duplicate_num =(char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL || duplicate_num == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate_num[i] = str[i];
		length++;
	}
	return (duplicate_num);
}
