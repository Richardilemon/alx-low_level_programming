#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the comparison function to use
 *
 * Return: the index of the first matching element, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
