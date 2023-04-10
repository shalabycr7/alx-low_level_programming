#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array of strings that has the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) < 1)
	{
		printf("0\n");
	}
	else
	{
		int i = 1;
		int sum = 0;

		for (; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
