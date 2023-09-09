#include <stdio.h>

/**
 * main - putchar
 *
 * Description: program that prints all single digit
 *	numbers of base 10 starting from 0,
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
	putchar('\n');
	return (0);
}
