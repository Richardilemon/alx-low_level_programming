#include "main.h"

/**
 * _salpha - checks for alphabetic characters
 * @c: the character to be checked
 * return: 1 for alphabetic characters or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c>= 122))
	{
	return (1);
	}
	return (0);
}
