#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed.
 * Return: no value.
 */
void print_all(const char *const format, ...)
{
	va_list ptr;
	const char args[] = "ifsc";
	char *s;
	unsigned int i, j, flag = 0;

	va_start(ptr, format);
	for (i = 0; format != NULL && format[i]; i++)
	{
		for (j = 0; args[j]; j++)
		{
			if (format[i] == args[j] && flag == 1)
			{
				printf(", ");
				break;
			}
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), flag = 1;
				break;
			case 's':
				s = va_arg(ptr, char *), flag = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
	}
	printf("\n");
	va_end(ptr);
}
