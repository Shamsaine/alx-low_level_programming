#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 - 14
 *
 * Return: success always
 *
 */

void more_numbers(void)
{
	int x;

	for (x = 0; x <= 14; x++)
	{
		_putchar((x) * 10);
	}
	_putchar('\n');
}
