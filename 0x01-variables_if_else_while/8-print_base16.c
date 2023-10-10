#include <stdio.h>

/**
 * main - entry point
 *
 * Return: success always
 */

int main(void)
{
	int x;
	char alph;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
