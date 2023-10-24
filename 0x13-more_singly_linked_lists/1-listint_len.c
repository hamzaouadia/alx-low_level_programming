#include "lists.h"

/**
 *	listint_len - function that returns the number of
 *		elements in a linked listint_t list.
 *	@list: linked list.
 *	Return: number of nodes.
*/

size_t	listint_len(const listint_t *list)
{
	size_t cnt = 0;

	while (list != NULL)
	{
		list = list->next;
		cnt++;
	}
	return (cnt);
}
