#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == letters[j])
			{
				n[i] = numbers[j];
			}
		}
	}
	return (n);
}

