#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 *
 * Description: Prints a string followed by a new line.
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

