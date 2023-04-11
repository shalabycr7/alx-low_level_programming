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
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
