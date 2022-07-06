#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers from 98
 *
 * @n: first parameter
 * Return: n
 */
void print_to_98(int n)
{
	if (n < 98)
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	else
		while (n < 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("98\n");
}
