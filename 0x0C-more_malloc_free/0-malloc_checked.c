#include "main.h"

/**
 *	malloc_checked - function that allocates memory using malloc.
 *	@b: intiger.
 *	Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *addr = malloc(b);

	if (!addr)
		exit(98);
	return (addr);
}
