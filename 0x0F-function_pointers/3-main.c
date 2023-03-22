#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point. Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <num1> <operator> <num2>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		fprintf(stderr, "Error: Can't find function for operator %s\n", op);
		exit(EXIT_FAILURE);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		fprintf(stderr, "Error: Division by zero\n");
		exit(EXIT_FAILURE);
	}

	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (EXIT_SUCCESS);
}
