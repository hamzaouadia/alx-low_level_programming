#include "main.h"

/**
 *	_strspn - function that gets the length of a prefix substring.
 *	@s: string.
 *	@accept: string.
 *	Return: intiger,
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	while (s[i])
	{
		k = 0;
		while (accept[k])
		{
			if (s[i] == accept[k])
			{
				j++;
				break;
			}
			k++;
		}
		if (!accept[k])
			break;
		i++;
	}
	return (j);
}
