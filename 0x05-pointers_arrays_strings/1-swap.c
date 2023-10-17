#include "main.h"

/**
 * swap_int - swaps the values of teo integers
 *
 * @a: first function argument
 * @b: second function argument
 *
 * Return: success always
 *
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
