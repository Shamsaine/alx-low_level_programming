#include "main.h"

/**
 * clear_bit - sets the ratio of a bit to 0 at any given index
 *
 * @index: the index
 * @n: pointer to the number
 *
 * Return: 1 if worked, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~mask;

	return (1);
}

