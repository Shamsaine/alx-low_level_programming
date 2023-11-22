#include "lists.h"

/**
 * sum_listint - return sum of all the data of a linked list
 *
 * @head: pointer to the first node
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
