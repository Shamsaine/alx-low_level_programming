#include "lists.h"

/**
 * add_nodeint - adds new node to the beginning of a linked list
 *
 * @head: pointer to the head
 * @n: new node data
 *
 * Return: the addresses of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA = malloc(sizeof(listint_t));

	if (nodeA == NULL)
		return (NULL);

	nodeA->n = n;
	nodeA->next = *head;
	*head = nodeA;

	return (nodeA);

}
