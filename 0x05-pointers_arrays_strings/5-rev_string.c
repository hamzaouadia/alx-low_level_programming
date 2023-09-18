#include "main.h"

/**
 *	rev_string - read description
 *
 *	@s: a pointer to a string.
 *	Description: function that reverses a string.
 *	Return: void
*/

void rev_string(char *s)
{
	int len;
	int i;
	char save;

	len = 0;
	while (s[len])
		len++;
	i = 0;
	while (i < len / 2)
	{
		save = s[i];
		s[i] = s[len];
		s[len] = save;
		i++;
		len--;
	}
}
