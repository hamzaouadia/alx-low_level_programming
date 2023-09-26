#include "main.h"

/**
 *	_strstr -  function that locates a substring.
 *	@haystack: string.
 *	@needle: string.
 *	Return: string or NULL,
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j;

	if (!needle[i])
		return (haystack);

	while (haystack[i])
	{
		j = 0;
		while (haystack[j + i] == needle[j])
		{
			if (!needle[j + 1])
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
