#include "lists.h"

/**
 *	free_listint2 - function that frees a listint_t list.
 *	@head: list.
 *	Return: nothing.
*/

void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
		return;
	while (*head)
	{
		fr = *head;
		*head = (*head)->next;
		free(fr);
	}
}
