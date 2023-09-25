#include "main.h"

/**
 *	_memcpy - function that copies memory area.
 *	@dest: destination.
 *	@src: source.
 *	@n: bytes of the memry area.
 *	Return: a string.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = -1;

	while (++i < n)
		dest[i] = src[i];
	return (dest);
}
