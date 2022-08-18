#include "main.h"
/**
 * _putchar: printing charater as number
 * @c: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
