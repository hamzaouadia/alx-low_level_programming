#include "lists.h"

/**
 *	pop_listint - function that deletes the head node of a
 *		listint_t linked list, and returns the head node’s data (n).
 *	@head: list.
 *	Return: integer.
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *fr;

	if (!*head)
		return (0);
	fr = *head;
	data = fr->n;
	*head = (*head)->next;
	free(fr);
	return (data);
}
