#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet in lowercase
 *
 * Description:  program that prints the alphabet in lowercase,
 *	followed by a new line.
 * Return: always 0.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		printf("%c", c);
		c++;
	}
	printf("\n");
	return (0);
}
