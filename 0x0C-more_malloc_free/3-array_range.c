#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: NULL if max < min
 */

int *array_range(int min, int max)
{
	int *x;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		x[i] = min++;

	return (x);


}
