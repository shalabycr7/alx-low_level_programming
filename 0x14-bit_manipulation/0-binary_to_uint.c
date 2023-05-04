#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int for given binary.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int num_len = 0, bin_num = 1;

	if (!b)
		return (0);

	while (b[num_len] != '\0')
		num_len++;
	num_len--;
	while (num_len >= 0)
	{
		if (b[num_len] != '0' && b[num_len] != '1')
			return (0);

		if (b[num_len] & 1)
			res += bin_num;
		num_len--;
		bin_num *= 2;
	}
	return (res);
}
