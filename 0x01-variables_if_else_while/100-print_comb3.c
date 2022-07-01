#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0
 */
int main(void)
{
	int w, y;

	for (w = 48; w <= 58; w++)
	{
		for (y = 48; y <= 58; y++)
		{
			putchar(w);
			putchar(y);
			if (w == 57 || y == 57)
			{
				break;
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
