#include "main.h"

/**
 *	leet - read description
 *
 *	@str: a string.
 *
 *	Description:   function that encodes a string into 1337.
 *	Return: string.
 */

char *leet(char *str)
{
	char *a = "aeotl";
	char *b = "AEOTL";
	char x[5] = {'4', '3', '0', '7', '1'};
	char *ptr;
	int i;

	ptr = str;
	while (*str)
	{
		i = 0;
		while (i < 5)
		{
			if (*str == *(a + i) || *str == *(b + i))
			{
				*str = x[i];
			}
			i++;
		}
	}
	return (ptr);
}
