#include <stdio.h>

/**
 * main - putchar
 *
 * Description: program that prints the lowercase alphabet in reverse
 *	followed by a new line.
 * Return: always 0.
 */
int main(void)
{
	int c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
