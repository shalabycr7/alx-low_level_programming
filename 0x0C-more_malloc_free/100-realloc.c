#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the space allocated.
 * @old_size: size for space of ptr.
 * @new_size: new size of the new allocated space.
 * Return: pointer to the memory previously allocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	else if (ptr == NULL)
		ptr = malloc(new_size);
	else if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
