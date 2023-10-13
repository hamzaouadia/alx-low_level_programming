#include "variadic_functions.h"

/**
 *	sum_them_all - function that returns the sum of all its parameters.
 *	@n: integer.
 *	Return: int.
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int s = 0;
	int x = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		x = va_arg(args, int);
		s += x;
		i++;
	}
	va_end(args);
	return (s);
}
