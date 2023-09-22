#include "main.h"

/**
 *	_strcmp - read description
 *
 *	@s1: first string.
 *	@s2: second string.
 *
 *	Description: function that compares two strings.
 *	Return: int.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
