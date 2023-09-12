#include "main.h"

/**
 * print_to_98 - read description
 *@n: the start.
 * Description: function that prints all natural numbers from n to 98,
 *	followed by a new line.
 * Return: int.
 */
void	print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n++);
		printf(", ");
	}
	while (n > 98)
	{
		printf("%d", n--);
		printf(", ");
	}
	printf("98\n");
}
