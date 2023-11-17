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
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%d] %d\n", h->len, h->str);

		nodes_counted++;
		h = h->next;
	}

	return (nodes_counted);
}
