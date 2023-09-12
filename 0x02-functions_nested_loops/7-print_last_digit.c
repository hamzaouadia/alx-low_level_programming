#include "main.h"

/**
 * print_last_digit - print last degit
 *
 * @n: is the given character
 * Description: function that prints the last digit of a number.
 * Return: integer.
 */
int print_last_digit(int n)
{
	int p = n % 10;

	if (p > 0)
		_putchar(p + '0');
	else 
		_putchar(-p + '0');
	return(n % 10);
}
