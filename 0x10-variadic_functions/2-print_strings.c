#include "variadic_functions.h"

/**
 * print_strings - function that print string followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(pointer, char *));

		if (i == '\0')
		{
			printf("nil");
		}

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pointer);
}
