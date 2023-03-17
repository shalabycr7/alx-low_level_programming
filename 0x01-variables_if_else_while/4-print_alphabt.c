#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && ch != 'e' && ch != 'q')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
