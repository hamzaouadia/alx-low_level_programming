#include "main.h"

/**
 *	_strcat - read description
 *
 *	@dest: the destination.
 *	@dsrc: the source.
 * 
 *	Description:  function that concatenates two strings.
 *	Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
