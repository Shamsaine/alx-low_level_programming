#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isnumber - function that checks if a string is anumber
 *
 * @s: string to be checked
 *
 * Return: success always
 *
 */

int _isnumber(char *s)
{
	int a, check, b;

	a = 0, b = 0, check = 1;
	if (*s == '-')
		a++;
	for (; *(s + a) != 0; a++)
	{
		b = isdigit(*(s + a));
		if (b == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

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
