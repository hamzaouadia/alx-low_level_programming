#include "lists.h"

/**
 *	free_listint - function that frees a listint_t list.
 *	@head: list.
 *	Return: nothing.
*/

void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
