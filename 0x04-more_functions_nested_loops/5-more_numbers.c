#include "main.h"
/**
 * more_numbers - 10 times 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 9)
			_putchar(y / 10 + '0');
			else
				_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
