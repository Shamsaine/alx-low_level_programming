#include "main.h"

/**
 * _strchr - locates character in a string
 *
 * @s: string to check
 * @c: character to check for
 *
 * Return: success always
 *
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	if (*(s + x) == c)
		return (s + x);
	return (0);
}
