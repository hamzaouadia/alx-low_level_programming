#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *	main - read description
 *
 *	@s: a pointer to a string.
 *	Description: program that generates random valid passwords for the program
 *	Return: 0
*/

int main(void)
{
	int s;
	int c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}