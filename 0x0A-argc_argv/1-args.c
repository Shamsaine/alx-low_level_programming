#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: first argument
 * @argv: second argument
 *
 * Return: success always
 *
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
