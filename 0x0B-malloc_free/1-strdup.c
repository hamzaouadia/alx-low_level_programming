#include "main.h"

/**
 *	_strdup - function that returns a pointer to a newly allocated
 *		space in memory, which contains a copy of the string given as a parameter.
 *	@str: string.
 *	Return: string.
*/

char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (!str)
		return (NULL);
	while (str[i])
		i++;
	s = malloc(sizeof(char) * i + 1);
	if (!s)
		return (NULL);
	i = -1;
	while (str[++i])
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
