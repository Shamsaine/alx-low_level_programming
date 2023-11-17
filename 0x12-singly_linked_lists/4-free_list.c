#include "lists.h"

/**
 * free_list - Frees a linked list.
 *
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}
