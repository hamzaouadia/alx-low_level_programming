#include "main.h"

/**
 *	print_array - read description
 *
 *	@a: a pointer to an array of intiger.
 *	@n: the number of elements of the array to be printed.
 *	Description: function that prints n elements of an array of integers,
 *		followed by a new line.
 *	Return: void
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		printf("%d", a[i++]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
