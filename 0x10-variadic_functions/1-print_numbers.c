#include "variadic_functions.h"
/**
 * print_numbers - printing numbers
 * @separator: pointer
 * @n: number of variables the parameter contain
 * Return void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
