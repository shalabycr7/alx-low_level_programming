#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory space.
 * @b: byte.
 * @n: bytes occupied.
 * Return: the pointer to destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
