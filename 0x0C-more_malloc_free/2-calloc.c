#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: array
 * @size: memory size
 *
 * Return: return NULL if nmemb or size = 0
 * and NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(total_size);
	if (x == NULL)
		return (NULL);

	for (unsigned int i = 0; i < total_size; i++)
	{
		((char *)x)[i] = 0;
	}

	return (x);
}
