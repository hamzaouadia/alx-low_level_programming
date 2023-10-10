#include "main.h"

/**
 *	_calloc - function that allocates memory for an array, using malloc.
 *	@nmemb: intiger.
 *	@size: intiger.
 *	Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *addr;
	unsigned int i = 0;

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	addr = malloc(nmemb * size);
	if (!addr)
		return (NULL);
	while (i < nmemb * size)
	{
		*((char *)addr + i) = 0;
		i++;
	}
	return (addr);
}
