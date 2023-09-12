#include "main.h"

/**
 * main - putchar
 *
 * Description: program that prints _putchar.
 *	followed by a new line.
 * Return: always 0.
 */
int main(void)
{
	char 	*str = "_putchar";
	int		i = -1;

	while (str[++i])
		putchar(str[i]);
	putchar('\n');
	return (0);
}
