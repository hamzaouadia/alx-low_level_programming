#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet
 *
 * Description:   a program that prints the
 *	alphabet in lowercase, and then in uppercase,
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
	c = 'A';
	while (c <= 'Z')
	{
		printf("%c", c);
		c++;
	}
	printf("\n");
	return (0);
}
