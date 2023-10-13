#include "variadic_functions.h"

/**
 *	print_strings - function that prints strings, followed by a new line.
 *	@n: integer.
 *	@separator: string.
 *	Return: void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	while (i < n)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
