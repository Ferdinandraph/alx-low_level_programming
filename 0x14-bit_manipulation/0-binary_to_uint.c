#include "main.h"
/**
 * binary_to_uint - converts binary numbers to a string
 * @b: pointer to string a and b
 * Return: integer value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dex_val = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	for (; b[len] == '1' || b[len] == '0'; len++)
	{
		dex_val = dex_val << 1;
		dex_val = dex_val + b[len] - '0';
	}
	return (dex_val);
}
