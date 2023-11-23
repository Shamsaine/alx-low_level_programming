#include "main.h"

/**
 * print_binary - prints binary representation of a number
 *
 * @n: the number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
	}
	mask >>= 1;
}
