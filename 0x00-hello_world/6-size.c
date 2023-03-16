#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %llu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %llu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %llu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %llu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %llu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
