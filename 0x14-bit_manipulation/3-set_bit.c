#include "main.h"

/**
 *	set_bit - sets the value of a bit to 1 at a giving index.
 *	@n: number.
 *	@index: index.
 *	Return: 1 if worked -1 if an error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nb = 1;

	if (index > 63)
		return (-1);
	nb <<= index;
	*n = *n | nb;
	return (1);
}
