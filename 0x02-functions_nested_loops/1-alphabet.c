#include "main.h"
/**
 * main - main entry
 *
 * Description: printing lowercase using putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
