#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: array size.
 * @max: element size.
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
