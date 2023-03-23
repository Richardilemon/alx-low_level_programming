#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to print between numbers, or NULL if none
 * @n: the number of integers passed to the function
 * @...: variable arguments list
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list args;
        unsigned int i;
        int num;

        va_start(args, n);

        for (i = 0; i < n; i++) {
                num = va_arg(args, int);
                printf("%d", num);
                if (separator != NULL && i < n - 1)
                        printf("%s", separator);
        }

        va_end(args);

        printf("\n");
}
