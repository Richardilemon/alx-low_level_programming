#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
        unsigned long int mask = 1;
        int bit_count = sizeof(unsigned long int) * 8;
        int i;

        mask = mask << (bit_count - 1);

        for (i = 0; i < bit_count; i++)
        {
                if ((n & mask) == 0)
                {
                        _putchar('0');
                }
                else
                {
                        _putchar('1');
                }

                mask = mask >> 1;
        }
}
