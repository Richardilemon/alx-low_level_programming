#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 *
 * @str: string to be split
 *
 * Return: pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
    char **words = NULL;
    int i, j, k, count = 0, len = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    words = malloc(sizeof(char *) * (count + 1));

    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; j < count; j++)
    {
        while (str[i] == ' ')
            i++;

        for (len = 0; str[i + len] != ' ' && str[i + len] != '\0'; len++)
            ;

        words[j] = malloc(sizeof(char) * (len + 1));

        if (words[j] == NULL)
        {
            for (k = 0; k < j; k++)
                free(words[k]);

            free(words);
            return (NULL);
        }

        for (k = 0; k < len; k++)
            words[j][k] = str[i + k];

        words[j][k] = '\0';
        i += len;
    }

    words[j] = NULL;
    return (words);
}
