#include <stdio.h>

/**
 * main - entry point
 *
 * Return: success always
 *
 */
:wq
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');	


	return (0);
}
