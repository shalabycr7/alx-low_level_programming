#include "main.h"
/**
 * clear_bit - clears value of a bit.
 * at a given index.
 * @n: number pointer.
 * @index: bit index.
 * Return: report status.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	if (*n & num)
		*n ^= num;
	return (1);
}
