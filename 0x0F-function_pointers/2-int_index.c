#include "function_pointers.h"

/**
 * int_index - look for a given integer
 * @array: given array.
 * @size: array size.
 * @cmp: pointer to the function to be used
 * to compare values.
 * Return: index of the first eement for which the cmp not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != NULL)
				return (i);
	}
	return (-1);
}
