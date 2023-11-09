#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: success always
 */

int main(int argc, char *argv[])
{
	int x, y, result;
	char i;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);

	if (!func_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	i = *argv[2];

	if ((i == '/' || i == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_ptr(x, y);

	printf("%d\n", result);

	return (0);


}
