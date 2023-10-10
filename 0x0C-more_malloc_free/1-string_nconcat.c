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
	char *str;
	int len;
	int i = 0;
	int j = 0;
	int nb = n;

	if (nb < 0)
		return(NULL);
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (_strlen(s2) <= nb)
		n = _strlen(s2);
	len = _strlen(s1) + nb;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (str);
	while (s1[i])
	{
        str[i] = s1[i];
        i++;
    }
	while (j < nb)
    {
		str[i] = s2[j];
        i++;
        j++;
    }
	str[i] = '\0';
	return (str);
}
