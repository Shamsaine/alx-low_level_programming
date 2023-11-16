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
	size_t nodes_counted = 1;

	if (h->string == NULL)
		return (0);

	while (h->link != NULL)
	{
		if (h->string == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->string);

		h = h->link;
		node_count += 1;
	}

	printf("[%d] %s\n", h->len, h->string);

	return (node_count);
}
