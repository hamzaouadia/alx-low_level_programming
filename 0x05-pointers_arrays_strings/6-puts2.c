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
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
