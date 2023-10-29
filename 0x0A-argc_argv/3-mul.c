#include <stdio.h>
#include <stdlib.h>

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
	int a, x;

	x = 0;
	if (argc != 3)
	{
		puts("Error");
		x = 1;
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);	
	}
	return (x);
}
