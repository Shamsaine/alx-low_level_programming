#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: function argument
 *
 * Return: success always
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;

	}
	putchar(10);

}

