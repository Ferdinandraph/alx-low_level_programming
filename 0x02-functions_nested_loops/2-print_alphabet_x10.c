#include "stdio.h"
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
			putchar(x);
			x++;
		}
		counter++;
		putchar('\n');
	}
}
void print_alphabet_x10(void);
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10(void);
	return (0);
}
