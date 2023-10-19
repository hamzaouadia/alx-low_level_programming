#include "lists.h"

/**
 *	print_list - function that prints all the elements of a list_t list.
 *	@h: a linked list.
 *	Return: a size_t
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}
