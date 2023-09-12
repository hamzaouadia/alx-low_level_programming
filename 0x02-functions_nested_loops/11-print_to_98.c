#include "main.h"

/**
 * add - read description
 *@n: the start.
 * Description: function that prints all natural numbers from n to 98,
 *	followed by a new line.
 * Return: int.
 */
void	print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n++);
			if (n - 1 != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n--);
			if (n + 1 != 98)
				printf(", ");
		}
	}
}
