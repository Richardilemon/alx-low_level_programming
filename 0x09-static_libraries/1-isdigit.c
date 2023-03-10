#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 *
 * @x: The character to be checked
 *
 * Return: 1 if @x is a digit or 0 if @x is not a digit
 */
int _isdigit(int x)
{
    if (x >= 48 && x <= 57)
    {
        return (1);
    }
    return (0);
}
