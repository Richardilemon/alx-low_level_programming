#include "main.h"
/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the input string.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char *start, *end, temp;
	int len = 0;
	start = s;
	end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

