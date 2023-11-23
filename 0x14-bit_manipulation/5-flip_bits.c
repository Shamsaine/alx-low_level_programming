#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n:first number
 * @m: second number
 *
 * Return: success always
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_rslt = n ^ m;
	unsigned int x = 0;

	while (xor_rslt > 0)
	{
		x += xor_rslt & 1;
		xor_rslt >>= 1;
	}

	return (x);
}
