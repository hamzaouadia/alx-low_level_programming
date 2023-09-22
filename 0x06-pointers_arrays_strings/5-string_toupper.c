#include "main.h"

/**
 *	reverse_array - read description
 *
 *	@a: array of intigers.
 *	@n: second string.
 *
 *	Description:  function that changes all
 *		lowercase letters of a string to uppercase.
 *	Return: string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str)
}
