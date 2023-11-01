#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @n: counting integer
 * @dest: destination string
 * @src: source string
 *
 * Return: success always
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;

	for (index = 0; src[index] && index < n; index++)
		dest[len++] = src[index];

	return (dest);


}
