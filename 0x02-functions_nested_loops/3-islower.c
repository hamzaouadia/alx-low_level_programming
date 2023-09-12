#include "main.h"

/**
 * _islower
 *
 * Description: function that checks for lowercase character.
 * Return: 1 if c is lower and 0 if not.
 */
int	_islower(int c)
{
	char	a = 'a';

	while (a <= 'z')
	{
		if (a == c)
			return (1);
		a++;
	}
	return (0);
}
