#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase followed by a new line
 *
 * Return: success always
 *
 */

int main(void)
{
	int x;
	for (x = 97; x <= 122; x++;)
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);
}
