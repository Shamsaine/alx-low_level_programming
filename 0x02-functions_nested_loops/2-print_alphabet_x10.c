#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lower case
 *
 * Return: success always
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

		_putchar('\n');
	}
	i++
}
