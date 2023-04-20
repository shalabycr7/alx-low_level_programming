#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: number of arguments.
 * @separator: the string to be printed between numbers.
 * Return: no value.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *s;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s == NULL)
			printf("(nill)");
		else
			printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
