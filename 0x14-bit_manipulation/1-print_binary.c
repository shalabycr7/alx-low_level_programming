#include "main.h"
/**
 * print_binary - prints the binary
 * of a given number.
 * @n: given number.
 * Return: no value.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
		_putchar('0');
}
