#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: Pointer to the beginning of the substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
    int i, j, c;

    i = 0;
    c = 0;
    while (haystack[i] != '\0')
    {
        j = 0;
        while (needle[j + c] != '\0' && haystack[i + c] != '\0'
               && needle[j + c] == haystack[i + c])
        {
            if (haystack[i + c] != needle[j + c])
                break;
            c++;
        }
        if (needle[j + c] == '\0')
            return (&haystack[i]);
        j++;
        i++;
    }

    return (NULL);
}
