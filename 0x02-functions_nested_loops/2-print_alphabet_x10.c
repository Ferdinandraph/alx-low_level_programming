#include "main.h"
/**
 * print_alphabet_x10 - printing a-z *10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		counter++;
		_putchar('\n');
	}
}

