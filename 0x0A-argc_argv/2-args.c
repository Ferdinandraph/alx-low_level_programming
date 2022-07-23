#include <stdio.h>
#include "main.h"
/**
 * main - printing a arguments
 * @argc: counter arg
 * @argv: pointer string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		if (count >= 0)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
