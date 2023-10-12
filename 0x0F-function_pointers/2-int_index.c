#include "function_pointers.h"

/**
 *	int_index - function that searches for an integer.
 *	@array: array of intiger.
 *	@size: size of array.
 *	@cmp: function pointer.
 *	Return: intiger.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0 && array && cmp)
	{
		while (i < size)
		{
			if (cmp(*(array + i)))
				return (i);
			i++;
		}
	}
	return (-1);
}
