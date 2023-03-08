#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: number to return the factorial from
 *
 * Description: This function recursively calculates the factorial of a number.
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

