#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int nu;

	nu = (nu % 10);

	if (nu < 0)
	{
		nu = (-1 * nu);
	}

	_putchar(nu + '0');
	return (nu);
}
