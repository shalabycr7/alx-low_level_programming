#include "main.h"

/**
 * _strchr - find a character in a given string,
 * @s: given string.
 * @c: wanted character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	for (unsigned int i; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}

