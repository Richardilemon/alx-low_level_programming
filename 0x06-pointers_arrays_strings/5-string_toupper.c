#include "main.h"

/**
 * string_toupper - Change all lowercase to uppercase
 *
 * @n: The string to be modified
 *
 * Return: The modified string @n
 */

char *string_toupper(char *n)
{
        int j = 0;

        while (n[j] != '\0')
        {
                if (n[j] >= 'a' && n[j] <= 'z')
                {
                        n[j] = n[j] - 32;
                }

                j++;
        }

        return (n);
}

