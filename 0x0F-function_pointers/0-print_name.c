#include "function_pointers.h"

/**
 * print_name - function that prints name
 *
 * @name: name to be printed
 * @f: pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
