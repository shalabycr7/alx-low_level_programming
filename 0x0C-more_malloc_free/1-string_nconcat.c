#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: character length.
 * Return: pointer to a newly allocated string space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int k = 0, j = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n > j)
		n = j;
	st = malloc((k + n) + 1);
	if (st == NULL)
		return (NULL);
	while (i < (k + n))
	{
		if (i < k)
			st[i] = s1[i];
		else
			st[i] = s2[i - k];
		i++;
	}
	st[i] = '\0';
	return (st);
}
