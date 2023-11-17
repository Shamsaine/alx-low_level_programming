#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list
 *
 * @head: first node
 * @str: string to be added
 *
 * Return: the address of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);


	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);


	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
