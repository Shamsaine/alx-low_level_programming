#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed into the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pointer;
	unsigned int i;
	unsigned int number;

	va_start(pointer, n);

	if (separator == NULL)
		exit ();
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(pointer, int));
	}
	
	va_end(pointer);


}
