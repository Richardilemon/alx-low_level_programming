/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two integer pointers as input, and swaps the values they point to.
 */

void swap_int(int *a, int *b)
{
    int temp = *a;  /* Store the value pointed to by 'a' in a temporary variable */
    *a = *b;        /* Assign the value pointed to by 'b' to the address pointed to by 'a' */
    *b = temp;      /* Assign the value stored in the temporary variable to the address pointed to by 'b' */
}

