#include "main.h"

/**
 *	_strncpy - read description
 *
 *	@dest: the destination.
 *	@src: the source.
 *	@n: the n bytes.
 *
 *	Description: function  that copies a string.
 *	Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
