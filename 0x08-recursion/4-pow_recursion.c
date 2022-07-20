#include "main.h"
/**
 * _pow_recursion - raised to the power
 * @x: first int parameter
 * @y: second int parameter
 * Return: interger
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
