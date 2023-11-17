#include "lists.h"

/**
 * add_node_end - adds a new node to the end of the list
 *
 * @head: head
 * @str: string to be added
 *
 * Return: address of the new element or NULL if failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup;
	int len;
	list_t *new_node, *end_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = 0;
	while (str[len])
		len++;

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}

	return (*head);

}
