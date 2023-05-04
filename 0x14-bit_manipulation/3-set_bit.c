#include "main.h"
/**
 * set_bit - sets the value of a bit to 1.
 * at a given index of a number.
 * @n: number pointer.
 * @index: index of the bit index.
 * Return: report status.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	num = 1 << index;
	*n = (*n | num);
	return (1);
}
