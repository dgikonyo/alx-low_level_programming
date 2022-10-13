#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  returns the index of the first element for 
 * which the cmp function does not return 0
 * @array: array to be initialized
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int index;

	if (!array || !cmp)
	{
		return;
	}
	else if (size <= 0)
	{
		return -1;
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
}
