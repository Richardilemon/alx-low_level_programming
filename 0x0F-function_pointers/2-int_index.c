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
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return i;
			}
		}
	}
	return -1;
}
