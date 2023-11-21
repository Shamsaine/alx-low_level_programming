#include "lists.h"

/**
 * listint_len - return the number of element in a linked list
 *
 * @h: head
 *
 * Return: success always
 */

size_t listint_len(const listint_t *h)
{
	size_t numof_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numof_nodes++;
	}
	return (numof_nodes);
}
