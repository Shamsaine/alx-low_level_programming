#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase followed by a new line
 *
 * Return: success always
 *
 */

int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);
}
