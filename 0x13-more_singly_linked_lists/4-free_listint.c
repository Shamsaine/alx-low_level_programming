#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: pointer to the first node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *prev_node = head;
	listint_t *next_node;

	while (prev_node != NULL)
	{
		next_node = prev_node->next;
		free(prev_node);
		prev_node = next_node;
	}
}
