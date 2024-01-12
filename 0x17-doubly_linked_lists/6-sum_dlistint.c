#include "lists.h"

/**
 * sum_dlistint - Sum of all data (n)
 *
 * @head: pointer to the first node
 *
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
