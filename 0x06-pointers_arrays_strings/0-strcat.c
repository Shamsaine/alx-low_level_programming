#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: success always
 *
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;

	for (index = 0; src[index]; index++)
		dest[len++] = src[index];

	return (dest);



}
