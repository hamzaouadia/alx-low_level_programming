#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet in lowercase
 *
 * Description:  program that prints the alphabet in lowercase,
 *	followed by a new line.
 *	Print all the letters except q and e.
 * Return: always 0.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		printf("%c", c);
		c++;
	}
	printf("\n");
	return (0);
}
