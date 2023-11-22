#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list and
 * returns head nodes data
 *
 * @head: pointer to the head node
 *
 * Return: 0 if linkedlist empty
 */

int pop_listint(listint_t **head)
{
	int value = (*head)->n;
	listint_t *x = *head;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(x);

	return (value);
}
