#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the input string.
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

