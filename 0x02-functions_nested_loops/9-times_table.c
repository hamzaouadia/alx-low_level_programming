#include "main.h"

/**
 * times_table - read description
 *
 * Description: function that prints the 9 times table, starting with 0.
 * Return: nothing.
 */
void	times_table(void)
{
	int	i = -1;
	int	j;

	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			if (j * i >= 10)
				_putchar(((j * i) / 10) + '0');
			_putchar(((j * i) % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (j * i < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
