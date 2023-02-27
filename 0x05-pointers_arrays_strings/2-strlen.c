/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the input string.
 */

int _strlen(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

