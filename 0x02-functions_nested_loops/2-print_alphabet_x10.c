#include "main.h"

/**
 * print_alphabet_x10 - putchar
 *
 * Description: function that prints 10 times the alphabet, in lowercase.
 *	followed by a new line.
 * Return: no return.
 */
void	print_alphabet_x10(void)
{
	int		i = 0;
	char	c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		i++;
	}
}
