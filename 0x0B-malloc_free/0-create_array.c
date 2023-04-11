#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: array size.
 * @c: specified initial char
 * Return: pointer for array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(*s) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
