#include "main.h"

/**
 *	print_rev - read description
 *
 *	@s: a pointer to a string.
 *	Description: function that prints a string, in reverse,
 *		followed by a new line.
 *	Return: void
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (--i >= 0)
		putchar(s[i]);
	putchar('\n');
}
