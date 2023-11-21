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
	listint_t *endnode = malloc(sizeof(listint_t));

	if (endnode == NULL)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;
	*head->next = prev_node;
	prev_node->next = endnode;
		

	return (endnode);

}
