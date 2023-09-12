#include "main.h"

/**
 * times_table - read description
 *
 * Description: function that prints the 9 times table, starting with 0.
 * Return: nothing.
 */
void	times_table(void)
{
	int	n = 0;
	int	i = -1;
	int	j;

	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			if (j * n >= 10)
				_putchar(((j * n) / 10) + '0');
			_putchar(((j * n) % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (j * n < 9)
					_putchar(' ');
			}
		}
		_putchar('\n');
		n++;
	}
}
