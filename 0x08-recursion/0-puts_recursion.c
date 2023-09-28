#include "main.h"

/**
 *	print_diagsums -  function that prints a string, followed by a new line.
 *	@s: string.
 *	Return: void.
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
