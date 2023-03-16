#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes of s2 to concatenate
 *
 * Description: This function concatenates two strings by copying s1 and
 * up to n bytes of s2 into a newly allocated space in memory.
 *
 * Return: On success, the function returns a pointer to the concatenated
 * string, which is null-terminated. On failure, the function returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	newstr = malloc(sizeof(char) * (len1 + n + 1));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		newstr[i] = s2[j];
		i++;
	}

	newstr[i] = '\0';

	return (newstr);
}
