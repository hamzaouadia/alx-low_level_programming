#include "main.h"

/**
 * jack_bauer - read description
 *
 * Description: function that prints every minute of the day of Jack Bauer,
 * 	starting from 00:00 to 23:59.
 * Return: nothing.
 */
void    jack_bauer(void)
{
	int	i = -1;
	int	j;

	while (++i <= 23)
	{
		j = -1;
		while (++j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar((i / 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
