#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: 0
 */
int main(void)
{
	int w, y;

	for (w = '0'; w <= '9'; w++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(w);
			putchar(y);
			if (w == '9' && y == '9')
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
