#include "main.h"

/**
 *
 * _isupper - checks whether a given string contains an uppercase character
 *
 * @c: The string to check
 *
 * Return: 1 if the string contains an uppercase character, 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);
	}

}
