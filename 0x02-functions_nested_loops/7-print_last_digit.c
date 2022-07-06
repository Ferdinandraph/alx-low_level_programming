#include "main.h"
/**
 * print_last_digit - printing the last digit
 *
 * @n: first parameter
 * Return: r
 */
int print_last_digit(int)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0')
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (0);
	}
}
