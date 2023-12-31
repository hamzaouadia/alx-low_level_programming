#include "main.h"

/**
 *	_atoi - read description
 *
 *	@s: a pointer to a string.
 *	Description: function that convert a string to an integer.
 *	Return: an integer
*/


int _atoi(char *s)
{
	int i;
	unsigned int n;
	int signe;

	i = 0;
	n = 0;
	signe = 1;
	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				signe *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
				n = n * 10 + (s[i++] - '0');
			break;
		}
		i++;
	}
	return (n * signe);
}
