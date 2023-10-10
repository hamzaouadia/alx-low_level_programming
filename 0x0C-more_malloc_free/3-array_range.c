#include "main.h"

/**
 *	array_range - function that creates an array of integers.
 *	@min: intiger.
 *	@max: intiger.
 *	Return: pointer to the allocated memory.
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);
	while (i < max - min + 1)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
