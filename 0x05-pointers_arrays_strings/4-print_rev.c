#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: function argument
 *
 * Return: success always
 *
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));

	putchar(10);
}
