#include "main.h"

/**
 *	_strlen - read description
 *
 *	@s: a pointer to a string.
 *	Description: function that returns the length of a string.
 *	Return: void
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 *	string_nconcat - function that concatenates two strings.
 *	@s1: string.
 *	@s2: string.
 *	@n: intiger.
 *	Return: pointer to the allocated memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *save;
	char *str;
	int len;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (_strlen(s2) <= n)
		n = _strlen(s2);
	len = _strlen(s1) + n;
	str = malloc(sizeof(char) * (n + 1));
	save = str;
	while (*s1)
		*str++ = *s1++;
	while (n--)
		*str++ = *s2++;
	*str = '\0';
	return (save);
}
