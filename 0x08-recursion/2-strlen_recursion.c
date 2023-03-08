#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be calculated
 *
 * Description: This function recursively calculates the length of a string.
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int lengthof = 0;

	if (*s)
	{
		lengthof++;
		lengthof += _strlen_recursion(s + 1);
	}
	
	return (lengthof);
}

