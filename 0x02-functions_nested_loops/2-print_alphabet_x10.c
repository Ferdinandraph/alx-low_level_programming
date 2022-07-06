#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}
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

