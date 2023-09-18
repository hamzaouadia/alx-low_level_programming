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
	int i;

	len = 0;
	while (str[len])
		len++;
	if (len % 2 != 0)
		len = (len - 1) / 2;
	i = 0;
	while (i < len)
		putchar(str[i++]);
	putchar('\n');
	
}
