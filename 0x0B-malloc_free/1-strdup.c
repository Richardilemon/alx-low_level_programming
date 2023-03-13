#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: The string to be duplicated.
 *
 * Return: On success, a pointer to the duplicated string. 
 * Returns NULL if insufficient memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

