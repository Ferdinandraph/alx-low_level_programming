#include "main.h"
/**
 * print_rev - prints string backwards
 *
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
