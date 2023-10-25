#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: function argument
 * @b: function argument
 * @n: function argument
 *
 * Return: success always
 *
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return ();
}
