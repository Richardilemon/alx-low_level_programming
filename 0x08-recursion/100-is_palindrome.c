#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	int len = _strlen_recursion(s);
	return (check_pal(s, 0, len - 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (*(s + start) != *(s + end))
		return (0);
	return (check_pal(s, start + 1, end - 1));
}

