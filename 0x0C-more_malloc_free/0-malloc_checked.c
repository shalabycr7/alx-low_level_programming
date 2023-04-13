#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: allocated size.
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
