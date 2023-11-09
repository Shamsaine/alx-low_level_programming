#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array
 * @size: the number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
