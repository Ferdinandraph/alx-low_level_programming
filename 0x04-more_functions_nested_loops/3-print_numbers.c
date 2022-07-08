#include "main.h"
/**
 * print_numbers - printing numbers from 0 to 9 followed by new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 9)
	{
		int j = 0;
		
		while (j < 9)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
