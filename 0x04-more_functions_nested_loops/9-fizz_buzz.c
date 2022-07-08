#include "main.h"
#include <stdio.h>
/**
 * main - main entry point
 *
 * Description: fizz, buzz, fizzbuzz
 * Return: 0
 */
int main(void)
{
	for (int i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i); 
		}
	}
	printf("\n");
	rturn (0);
}
