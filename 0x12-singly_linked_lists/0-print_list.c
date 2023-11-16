#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: funtion argument
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_counted = 0;

	while (h)
	{
		if (h->string == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%zu] %s\n", h->len, h->string);

		nodes_counted++;
		h = h->link;
	}

	return (nodes_counted);
}
