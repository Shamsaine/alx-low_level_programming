#include "main.h"

/**
 * _memcpy - function that copie memory area
 *
 * @dest: destination
 * @src: source 
 * @n: counting integer
 *
 * Return: success always
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; 1 < n; i++)
	{
		dest[i] = src[i];	
	}
	return (dest);
}
