#include "main.h"

/**
 *	_strcpy - read description
 *
 *	@dest: a pointer to destination.
 *	@src: a pointer to source.
 *	Description: function that copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 *	Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
