#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 *
 * @ac: argument count
 * @av: array of argument strings
 *
 * Return: pointer to new string containing concatenated arguments
 * , or NULL on failure
 */
char *argstostr(int ac, char **av)
{
        int i, j, k;
        int total_len = 0;
        char *str;

        if (ac == 0 || av == NULL)
                return (NULL);

        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j]; j++)
                        total_len++;
                total_len++;
        }

        str = malloc((total_len + 1) * sizeof(char));

        if (str == NULL)
                return (NULL);

        k = 0;
        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j]; j++)
                {
                        str[k] = av[i][j];
                        k++;
                }
                str[k] = '\n';
                k++;
        }

        str[k] = '\0';

        return (str);
}
