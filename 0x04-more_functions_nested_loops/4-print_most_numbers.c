#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 *
 * Return: succeess always
 *
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		if (x == 2 || x == 4)
			_putchar('\n');
		else
			_putchar(x);
		x++;
	}
}
