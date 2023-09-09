#include <stdio.h>

/**
 * main - putchar
 *
 * Description: program that prints
 *	all the numbers of base 16 in lowercase,
 *	followed by a new line.
 * Return: always 0.
 */
int main(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
