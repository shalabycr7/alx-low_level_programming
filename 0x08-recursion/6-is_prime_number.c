#include "main.h"

/**
 * prime_state_check - check if a number is prime number or not.
 * @base_num: number.
 * @expo_num: number of turns.
 * Return: 1 if the base_num is a prime number and 0 otherwise
 */
int prime_state_check(int base_num, int expo_num)
{
	if (base_num % expo_num == 0)
	{
		if (base_num == expo_num)
			return (1);
		return (0);
	}
	return (prime_state_check(base_num, expo_num + 1));
}
/**
 * is_prime_number - check if a number is a prime number or not.
 * @n: number.
 * Return: 1 if n is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0)
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (prime_state_check(n, 2));
}
