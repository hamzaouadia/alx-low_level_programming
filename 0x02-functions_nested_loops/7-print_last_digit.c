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
	_putchar((_abs(n) % 10) + '0');
	return(n % 10);
}
