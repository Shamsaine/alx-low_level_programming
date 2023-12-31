#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: 0 if n == 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;
	unsigned int sum = 0;

	va_start(pointer, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pointer, int);
	}
	va_end(pointer);

	return (sum);



}
