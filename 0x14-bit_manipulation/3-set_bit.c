#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at given index
 *
 * @index: the index
 * @n: pointer to the number
 *
 * Return: 1 if worked, -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;

	return (1);
}

