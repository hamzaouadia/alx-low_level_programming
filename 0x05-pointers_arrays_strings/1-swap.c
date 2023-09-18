#include "main.h"

/**
 *	swap_int - read description
 *
 *	@a: a pointer to the first integer.
 *	@b: a pointer to the second integer.
 *	Description: function that swaps the values of two integers.
 *	Return: void
*/

void swap_int(int *a, int *b)
{
	int save;

	save = *a;
	*a = *b;
	*b = save;
}