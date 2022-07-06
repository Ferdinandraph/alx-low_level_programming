#include "main.h"
/**
 * print_alphabet - print lowercase a-z
 *
 * Return: void
 */
void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
