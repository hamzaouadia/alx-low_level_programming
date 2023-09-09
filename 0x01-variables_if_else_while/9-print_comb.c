#include <stdio.h>

/**
 * main - putchar
 *
 * Description:  program that prints all possible
 *	combinations of single-digit numbers.
 *	followed by a new line.
 * Return: always 0.
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
