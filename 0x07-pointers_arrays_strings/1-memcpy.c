#include "main.h"
/**
 * _memcpy - copies away memory space,
 * @dest: selected memory location.
 * @src: memory source.
 * @n: bytes occupied.
 * Return: the pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
