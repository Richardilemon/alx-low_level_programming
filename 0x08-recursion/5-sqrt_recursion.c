#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Description: This function recursively calculates the natural square root of a number.
 * Return: The resulting square root, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursively finds the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: The resulting square root, or -1 if n is not a perfect square.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (actual_sqrt_recursion(n, i + 1));
}

