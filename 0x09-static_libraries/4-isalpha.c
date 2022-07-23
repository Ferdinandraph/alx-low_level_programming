#include "main.h"
/**
 * _isalpha - checking to see if the input is an alphabet
 *
 * Return: 0
 * @c: first parameter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
