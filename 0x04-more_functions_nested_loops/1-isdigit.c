#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to check
 * Return: 1 if digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
