#include "main.h"
/**
 * print_numbers - printing numbers from 0 to 9 followed by new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
