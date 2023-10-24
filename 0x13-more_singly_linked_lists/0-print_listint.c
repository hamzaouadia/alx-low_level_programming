#include "lists.h"

/**
 *	print_listint - prints all the elements of a list
 *	@list: input list.
 *	Return: size_t.
*/

size_t	print_listint(const listint_t *list)
{
	size_t cnt = 0;
	const listint_t *tmp = list;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		cnt++;
	}
	return (cnt);
}
