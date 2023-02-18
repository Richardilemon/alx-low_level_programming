#include <stdio.h>
/**
 * main - starting point for program execution
 * Return: returns 0 when the program is successful
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
