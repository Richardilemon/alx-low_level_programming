#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size in bytes of each element
 *
 * Return: pointer to the allocated memory
 *         NULL if @nmemb or @size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        void *ptr;
        unsigned int i;
        char *s;

        if (nmemb == 0 || size == 0)
                return (NULL);

        ptr = malloc(nmemb * size);

        if (ptr == NULL)
                return (NULL);

        s = ptr;

        for (i = 0; i < nmemb * size; i++)
                s[i] = 0;

        return (ptr);
}
