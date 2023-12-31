#include "main.h"

/**
 *	clear_bit - sets the value of a bit to 0 at a giving index.
 *	@n: number.
 *	@index: index.
 *	Return: 1 if worked. -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nb = 1;

	if (index > 63)
		return (-1);
	nb <<= index;
	*n = *n & ~nb;
	return (1);
}
