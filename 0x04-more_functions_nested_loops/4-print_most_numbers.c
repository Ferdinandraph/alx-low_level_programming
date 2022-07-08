#include "main.h"
/**
 * print_most_numbers - printing without 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
