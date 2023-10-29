#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: argument count
 * @argv: which arguement to be targetted
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int val1, val2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if ((argv[2] == '/' && val2 == 0) || (argv[2] == '%' && val2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = func(val1, val2);
	printf("%d\n", result);
	return (0);
}
