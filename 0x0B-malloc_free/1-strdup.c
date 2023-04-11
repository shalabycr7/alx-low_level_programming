#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocates a new space in memory for a given string.
 * @str: given string.
 * Return: pointer to a newly allocated string in memory.
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str));
	if (s == NULL)
		return (NULL);
	s = str;
	return (s);
}
