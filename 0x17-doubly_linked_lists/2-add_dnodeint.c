#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *
 * @head: pointer to the first node
 * @n: Value
 *
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));


	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	temp = *head;
	node->next = temp;
	temp->prev = node;
	*head = node;
	return (node);
}
