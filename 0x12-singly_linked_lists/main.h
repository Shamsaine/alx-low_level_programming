#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

/*
 * struct node - structure to creat node for the linkedlist
 *
 * @value: the data in the list
 * @link: link to the memory address of the next value
 *
 */

struct node{
	int value;
	struct node *link;
};

/* Function Prototypes */

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
