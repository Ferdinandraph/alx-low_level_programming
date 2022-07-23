#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the program
 * @argc: counter
 * @argv: the pointer argument
 * Return: 0
 */
int main(int argc, int *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
