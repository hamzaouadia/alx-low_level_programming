#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printf
 *
 * Description: program that prints all single digit
 *	numbers of base 10 starting from 0,
 *	followed by a new line.
 * Return: always 0.
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	return (0);
}
