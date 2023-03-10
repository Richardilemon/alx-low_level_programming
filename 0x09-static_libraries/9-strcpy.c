#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string to be copied
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
    int length = 0;
    int i = 0;

    while (*(src + length) != '\0')
    {
        length++;
    }
    for (i = 0; i < length; i++)
    {
        dest[i] = src[i];
    }
    dest[length] = '\0';

    return (dest);
}
