#include "main.h"

/**
 * _isalpha - isalpha
 *
 * @c: is the given character
 * Description: function that checks for alphabetic character.
 * Return: 1 if @c is alphabetic and 0 if not.
 */
int	_isalpha(int c)
{
	char	a = 'a';
	char	b = 'A';

	while (a <= 'z')
	{
		if (a == c || b == c)
			return (1);
		a++;
		b++;
	}
	return (0);
}
