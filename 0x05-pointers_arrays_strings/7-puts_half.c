#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: function argument
 *
 * Return: success always
 *
 */

void puts_half(char *str)
{
	int x, len = strlen(str);

	for (x = ((len - 1) / 2) + 1; x < len; x++)
		putchar(*(str + x));
	putchar(10);
}
