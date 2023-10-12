#include "function_pointers.h"

/**
 *	array_iterator - function that executes a function
 *		given as a parameter on each element of an array.
 *	@array: array of intiger.
 *	@size: size of array.
 *	@action: function pointer.
 *	Return: nothing.
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action && size)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
