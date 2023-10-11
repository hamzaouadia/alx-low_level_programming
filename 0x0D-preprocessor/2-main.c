#include <stdlib.h>
#include <stdio.h>

/**
 *	main - aprogram that prints the name of the file
 *		it was compiled from, followed by a new line.
 *	Return: 0 in succes.
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
