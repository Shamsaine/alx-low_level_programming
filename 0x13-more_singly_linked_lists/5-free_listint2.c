#include "lists.h"

/**
 * free_listint2 - frees a linkedlist
 *
 * @head: pointer to a head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *prev_node;
	listint_t *next_node;

	if (head)
	{
		*prev_node = head;
		
		while (prev_node != NULL)
		{
			next_node = prev_node->next;
			free(prev_node);
			prev_node = next_node;
		}
		
		*head = NULL;
	}
}
