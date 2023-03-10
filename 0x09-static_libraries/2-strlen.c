#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointer to the string to be used
 *
 * Return: length of the string @s
 */
int _strlen(char *s)
{
    int longi = 0;

    while (*s != '\0')
    {
        longi++;
        s++;
    }
    return (longi);
}

