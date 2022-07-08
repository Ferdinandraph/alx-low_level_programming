#include "main.h"
/**
 * more_numbers - 10 times 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			else
				_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
