#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on element of an array.
 * @array: given array.
 * @size: array size.
 * @action: pointer to the function.
 * Return: no value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
