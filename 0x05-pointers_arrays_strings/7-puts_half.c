#include "main.h"

/**
 *	puts_half - read description
 *
 *	@str: a pointer to a string.
 *	Description: function that prints half of a string, followed by a new line.
 *	Return: void
*/

void puts_half(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	if (len % 2 != 0)
		len = (len - 1) / 2;
	else
		len = len / 2;
	while (str[len])
		putchar(str[len++]);
	putchar('\n');
	
}
