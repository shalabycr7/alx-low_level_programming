#include "main.h"
/**
 * flip_bits - returns the number of bits needed
 * to flip to get from number to another
 * @n: first number.
 * @m: second number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_num = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bits_num++;
		n >>= 1;
		m >>= 1;
	}
	return (bits_num);
}
