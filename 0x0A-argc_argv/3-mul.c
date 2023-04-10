#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array of strings that has the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("%s\n", "Error");
		return (0);
	}
	return (0);
}
