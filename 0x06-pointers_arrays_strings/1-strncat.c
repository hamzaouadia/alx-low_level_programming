#include "main.h"

/**
 *	_strncat - read description
 *
 *	@dest: the destination.
 *	@src: the source.
 *	@n: the n bytes.
 *
 *	Description: function that concatenates two strings.
 *	Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
