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

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(pointer, int));

		if (i < n - 1 && separator)
			printf("%s\n", separator);
	}

	putchar('\n');
	va_end(pointer);
}
