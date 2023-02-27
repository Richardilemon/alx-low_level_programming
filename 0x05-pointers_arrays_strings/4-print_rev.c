#include "main.h"
/**
 * print_rev - Prints a string in reverse to stdout.
 * @s: Pointer to the input string.
 * return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	while (len > 0)
	{
		putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}

