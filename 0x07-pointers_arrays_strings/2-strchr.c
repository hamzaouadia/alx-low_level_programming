#include "main.h"

/**
 *	_strchr - function that locates a character in a string.
 *	@s: string.
 *	@c: charachter.
 *	Return: string or NULL,
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
