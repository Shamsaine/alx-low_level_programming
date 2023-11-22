#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linkedlist
 * @head: Pointer to the first node
 * @index: Index of node to return 
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int x = 0;

	current_node = head;
	while (current_node && x < index)
	{
		current_node = current_node->next;
		x++;
	}

	if (x == index && current_node)
		return (current_node);

	return (NULL);
}
