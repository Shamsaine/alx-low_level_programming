#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: function argument
 *
 * Return: success always
 *
 */

void rev_string(char *s)
{
	int i, tmp, len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
