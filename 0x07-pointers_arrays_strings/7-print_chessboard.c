#include "main.h"

/**
 *	print_chessboard -  function that locates a substring.
 *	@a: 2d array.
 *	Return: void,
*/

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
