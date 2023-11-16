#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *h = malloc(sizeof(list_t));

	if (h->str == NULL)
		printf("(nil)");
	
	list_t *ptr = NULL;
	ptr = h;

	while (ptr != 0)
	{
		printf("%s\n", ptr->str);
		ptr = ptr->link;	
	}


}
