#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers */
/* betty style doc */
/**
 * main - starting point for program execution
 *
 * Return: returns 0 when the program is executed successfully
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	p = n % 10;
	if (p > 5)
		printf("Last digit of %d is %d and is greater than 5", n, p);
	else if (p == 0)
		printf("Last digit of %d is %d and is 0", n, p);
	else if (p < 6 && p != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, p);
	printf("\n");

	return (0);
}
