#include "lists.h"

/**
 *	add_nodeint - function that adds a new node
 *		at the beginning of a listint_t list.
 *	@head: list.
 *	@n: integer.
 *	Return: linked list.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));
	if (!list)
		return (NULL);
	list->n = n;
	list->next = *head;
	*head = list;
	return (*head);
}
