#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array size.
 * @size: element size.
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
