#include "main.h"

/**
 *  print_binary - prints the binary representation of a number.
 *  @n: giving number.
 *  Return: Nothing(void).
 */

void print_binary(unsigned long int n)
{
	int i = 63;
	int j = 0;
	unsigned long int nb;

	while (i >= 0)
	{
		nb = n >> i;
		if (nb & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
		i--;
	}
	if (j == 0)
		_putchar('0');
}
