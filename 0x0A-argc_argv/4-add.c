#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] != '\0')
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}	
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
