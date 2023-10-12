#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @a: function argument
 *
 * Return: success always
 *
 */

int print_last_digit(int a)
{
	int x = a % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
