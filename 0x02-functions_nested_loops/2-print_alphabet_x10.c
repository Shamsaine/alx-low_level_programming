#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lower case
 *
 * Return: success always
 *
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char x;
	while (x++ <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
	}
	_putchar('\n');
}
