#include "variadic_functions.h"
/**
 * sum_them_all - sum all all parameters
 * @n: number of variables
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_list ap;
	va_start(ap, args);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
