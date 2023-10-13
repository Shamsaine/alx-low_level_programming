#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 *
 * Return: success always
 *
 */

void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
