#include "lists.h"

/**
 * print_listint - prints all the elements in a linked linkedlist
 *
 * @h: head
 *
 * Return: success always
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes;
	}
	return (count_nodes);
}
