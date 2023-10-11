#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lower case
 *
 * Return: success always
 *
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar((x)*10);

	_putchar('\n');
}
