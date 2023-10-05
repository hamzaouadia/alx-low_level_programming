#include "main.h"

/**
 *	create_array - function that creates an array of chars,
 *		and initializes it with a specific char.
 *	@size: size.
 *	@c: charachter.
 *	Return: string.
*/

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *str = malloc(sizeof(char) * size);

	if (!str || size == 0)
		return (NULL);
	while (size > i)
		str[i++] = c;
	return (str);
}
