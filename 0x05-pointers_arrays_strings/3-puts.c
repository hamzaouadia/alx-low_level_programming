#include "main.h"

/**
 *	_puts - read description
 *
 *	@str: a pointer to a string.
 *	Description: function that prints a string, followed by a new line, to stdout.
 *	Return: void
*/

void _puts(char *str)
{
	while (*str)
		putchar(*str++);
}
