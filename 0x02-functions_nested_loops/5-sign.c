#include "main.h"

/**
 * print_sign - positive or nigative
 *
 * @c: is the given character
 * Description: function that prints the sign of a number.
 * Return: 1 if @c is greater than 0, 0 if @c is 0 and -1 if less.
 */
int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
