#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if the system is little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_ptr = (char *)&num;

	if (*endian_ptr)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
