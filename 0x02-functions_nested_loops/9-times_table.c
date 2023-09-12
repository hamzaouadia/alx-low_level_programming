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
		j = 0;
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		while (++j < 10)
		{
			_putchar((n / 10) + '0');
			if (n >= 10)
				_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		n++;
	}
}
int main(void)
{
    times_table();
    return (0);
}