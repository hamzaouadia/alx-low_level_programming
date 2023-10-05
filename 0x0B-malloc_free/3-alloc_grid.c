#include "main.h"

/**
 *	alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
 *	@width: intiger.
 *	@height: intiger.
 *	Return: 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int j;
	int i = 0;
	int **array = malloc(sizeof(int *) * height);

	if (!array)
		return (NULL);
	if (height <= 0 || width <= 0)
		return (NULL);
	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		if (!array[i])
		{
			while (i >= 0)
				free(array[i--]);
			free(array);
			return (NULL);		
		}
	}
	i = -1;
	while (++i < height)
	{
		j = -1;
		while (++j < width)
			array[i][j] = 0;
	}
	return (array);
}
