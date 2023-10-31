#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: success always
 *
 */

int main(int argc, char **argv)
{
	int x, y, z;

	z = 0, y = 0;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			if (isnumber(argv[x]))
				y += atoi(argv[x]);
			else
				z = 1;
		}
	}
	if (z == 0)
		printf("%i\n", y);
	else
		puts("Error");
	return (z);
}
