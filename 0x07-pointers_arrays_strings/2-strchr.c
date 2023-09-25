#include "main.h"

/**
 *	_strchr - function that locates a character in a string.
 *	@s: string.
 *	@c: charachter.
 *	Return: pointer to the first occurrence of the character c in the string s,
 *		or NULL if the character is not found.
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
