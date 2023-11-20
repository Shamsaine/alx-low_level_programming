#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/* Functions Prototype */

int _putchar(char c);


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif
