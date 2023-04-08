#include "main.h"

/**
 * find_sqrt - helper function to find the natural square root of a number.
 * @base_num: base number.
 * @expo_num: number of turns.
 * Return: the square root of a number or -1.
 */
int find_sqrt(int base_num, int expo_num)
{
	if (expo_num % (base_num / expo_num) == 0)
	{
		if (expo_num * (base_num / expo_num) == base_num)
			return (expo_num);
		else
			return (-1);
	}
	return (find_sqrt(base_num, expo_num + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number.
 * Return: natural the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (find_sqrt(n, 2));
}
