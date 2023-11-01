#include "main.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int x1, x2, y, z;
	char *empty = "";
	char *s;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;

	x1 = 0, x2 = 0;
	while (*(s1 + x1))
		x1++;
	while (*(s2 + x2))
		x2++;

	s = malloc(sizeof(char) * (x1 + x2 + 1));

	if (s == 0)
		return (0);
	for (y = 0; y < x1; y++)
		*(s + y) = *(s1 + y);
	for (y = 0; z = x1; y <= x2; y++; z++)
		*(s + z) = *(s2 + y);

	return (s);
}
