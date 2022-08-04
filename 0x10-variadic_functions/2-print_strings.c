#include "variadic_functions.h"
/**
 * print_strings - prints string
 * @separator: pointer
 * @n: number of parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
