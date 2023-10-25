#include "lists.h"

/**
 * insert_nodeint_at_index - add a new node at a giving index.
 * @head: pointer to pointer pointing to the first node in listint_t list.
 * @idx: index.
 * @n: the data should be saved in the new node.
 * Return: the adresse of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	tmp = *head;
	while (i < idx - 1)
	{
		if (!tmp)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
