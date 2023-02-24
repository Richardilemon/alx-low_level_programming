#include "main.h"

/**
 *
 * _isupper - checks whether a given string contains an uppercase character
 *
 * @str: The string to check
 *
 * Return: 1 if the string contains an uppercase character, 0 otherwise
 */
int _isupper(char *str) 
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			return 1;
		}
	}
	return 0;
}
