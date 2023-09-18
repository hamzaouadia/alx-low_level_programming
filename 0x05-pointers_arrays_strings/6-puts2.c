#include "main.h"

/**
 *	puts2 - read description
 *
 *	@str: a pointer to a string.
 *	Description: function that prints every other character of a string,
 *		starting with the first character, followed by a new line.
 *	Return: void
*/

void puts2(char *str)
{
	while (*str)
		putchar(*(str + 2));
	putchar('\n');
}
