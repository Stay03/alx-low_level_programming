#include "function_pointers.h"

/**
 * int_index - Searches for an integer within an array
 * @array: The array to search through
 * @size: The number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0; -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}

