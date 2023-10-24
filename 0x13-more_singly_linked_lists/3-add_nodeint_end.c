#include "lists.h"

/**
 *	add_nodeint_end - function that adds a new node
 *		at the end of a listint_t list.
 *	@head: list.
 *	@n: integer.
 *	Return: linked list.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
