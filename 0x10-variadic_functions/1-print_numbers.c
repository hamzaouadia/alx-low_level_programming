#include "variadic_functions.h"

/**
 *	print_numbers - function that prints numbers, followed by a new line.
 *	@n: integer.
 *	@separator: string.
 *	Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int value = 0;

	va_start(args, n);

	while (i < n)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
