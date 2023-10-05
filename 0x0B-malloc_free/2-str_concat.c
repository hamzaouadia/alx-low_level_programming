#include "main.h"

/**
 *	str_concat - function that concatenates two strings.
 *	@s1: string.
 *	@s2: string.
 *	Return: string.
*/

char *str_concat(char *s1, char *s2)
{
	int i = -1;
	int j = -1;
	int len = 0;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len] || s2[len])
	{
		if (s1[len])
			len++;
		if (s2[len])
			len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
