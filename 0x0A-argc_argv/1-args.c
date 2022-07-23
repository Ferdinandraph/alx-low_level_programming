#include <stdio.h>
#include "main.h"
/**
 * main - printing the number passed to the argument
 * @argc: counter arg
 * @argv: pointer string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
