#include "main.h"

/**
 *	_strlen - read description
 *
 *	@s: a pointer to a string.
 *	Description: function that returns the length of a string.
 *	Return: void
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
