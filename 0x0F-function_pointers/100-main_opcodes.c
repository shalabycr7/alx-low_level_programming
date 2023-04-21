#include <stdio.h>
#include <stdlib.h>

/**
 * main - test the code.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	num = nbytes - 1;
	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != num)
			printf(" ");
	}
	printf("\n");
	return (0);
}
