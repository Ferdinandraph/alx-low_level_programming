#include "main.h"
/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 *
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int x = 0 , z, n = size - 1;

	if (size > 0)
	{


		for (; x < size; x++)
		{
			for (z = 0; z < size z++)
			{
				if (z < n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
