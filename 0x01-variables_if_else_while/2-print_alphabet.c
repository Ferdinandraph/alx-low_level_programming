#include <stdio.h>
#include <conio.h>
/**
 * main - the entry point
 *
 * Description: printing alphabets using putchar() function
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar("\n");
	return (0);
}
