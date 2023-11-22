#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 *
 * @head: pointer to the head
 * @idx: index of the list where the new node should be added
 * @n: data of the new node to be added
 *
 * Return: address of the new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current_node;
	listint_t *prev_node;
	unsigned int i;


	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		*current_node = *head;
		*prev_node = NULL;
		i = 0;

		while (i < idx && current_node != NULL)
		{
			prev_node = current_node;
			current_node = current_node->next;
			i++;
		}

		if (i == idx)
		{
			prev_node->next = newnode;
			newnode->next = current_node;
		}

		else
		{
			free(newnode);
			return (NULL);
		}
	}

	return (newnode);
}
