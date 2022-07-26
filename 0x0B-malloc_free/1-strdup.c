#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate space memory
 * @str: pointer character
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *duplicate_num;
	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	duplicate_num = malloc(sizeof(char) * (length + 1));
	for (i = 0; str[i]; i++)
	{
		duplicate_num[i] = str[i];
		length++;
	}
	duplicate_num[length] = '\0';
	return (duplicate_num);
}
