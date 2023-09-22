#include "main.h"

/**
 *	reverse_array - read description
 *
 *	@a: array of intigers.
 *	@n: second string.
 *
 *	Description:  function that reverses the content
 *		of an array of integers.
 *	Return: intiger.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int s;

	while (i < n)
	{
		s = a[i];
		a[i] = a[n - 1];
		a[n - 1] = s;
		i++;
		n--;
	}
}
