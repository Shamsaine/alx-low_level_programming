#include "main.h"

/**
 * reset_to_98 - pointer to an int as parameter and update the value it points
 * to to 98
 *
 * @n: function argument
 *
 * Return: success always
 *
 */

void reset_to_98(int *n)
{
	int x = 98;
	*n = x;
}
