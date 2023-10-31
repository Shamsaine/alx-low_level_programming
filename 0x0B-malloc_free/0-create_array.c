#include "main.h"

/**
 * create_array - create an array of characters and initializes with a 
 * specific character
 *
 * @size: size of array of character
 * @c: character
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s

	if (size <= 0)
		return (0);
	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (x = 0; x < size; x++)
		*(s + x) = c;

	*(s + x) = '\0';

	return (s);

}
