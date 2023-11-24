#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a pointer to a string 0 and 1 chars
 *
 * Return: converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1
 * if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t x = 0;
	size_t y = 0;
	size_t sum = 0;
	size_t index = 1;
	int base = 2;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		for (y = len - 1; y > 0; y--)
			len--;

		index = index * base;
		sum = sum + (index * (b[x] - 48));
		len--;
		index = 1;
	}
	return (sum);
}
