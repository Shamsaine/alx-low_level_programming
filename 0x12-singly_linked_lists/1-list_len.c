#include "main.h"

/**
 * list_len - returns the numbers of element in a linked list
 *
 * @h: head
 *
 * Return: always 0
 *
 */


size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
