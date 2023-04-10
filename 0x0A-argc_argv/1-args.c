#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array of strings that has the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
