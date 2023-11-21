#include "lists.h"

/**
 * add_nodeint_end - add node to the end of a linked list
 *
 * @head: pointer to the head
 * @n: new data to be added
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_endnode = malloc(sizeof(listint_t));

	if (new_endnode == NULL)
		return (NULL);

	new_endnode->n = n;
	new_endnode->next = NULL;

	if (*head == NULL)
		*head = new_endnode;

	else
	{
		listint_t *prev_node = *head;

		while (prev_nodde->next != NULL)
		{
			prev_node = prev_node->next;
		}
		prev_node->next = new_endnode;
	}

	return (new_endnode);
}
