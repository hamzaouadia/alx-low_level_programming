#include "main.h"
#include <stdio.h>

/**
 *	print_diagsums - prints the sum of two diagonals of square matrix of int.
 *	@a: 2d array.
 *	@size: size of the array.
 *	Return: void.
*/

void print_diagsums(int *a, int size)
{
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (j < size)
	{
		i = j * size + j;
		sum1 += a[i];
		j++;
	}

	j = 1;
	while (j <= size)
	{
		i = j * size - j;
		sum2 += a[i];
		j++; 
	}
	printf("%d, %d\n", sum1, sum2);
}
