#include "main.h"

/**
 * print_array - prints n element of an array
 *
 * @a: the array
 * @n: the element of the array
 *
 * Return: success always
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n ; num++)
	{
		if (num != n - 1)
			printf("%d, ", a[num]);
		else
			printf("%d", a[num]);

	}
	putchar(10);
}
