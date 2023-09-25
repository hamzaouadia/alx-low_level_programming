#include "main.h"

/**
 *	_memset - function that fills memory with a constant byte.
 *	@s: string.
 *	@b: charachter to be set.
 *	@n: bytes of the memry area.
 *	Return: a string.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = -1;

	while (++i < n)
		s[i] = b;
	return (s);
}
