#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a giving
 *                           index in the listint_t list.
 * @head: pointer to pointer to the first node in the listint_t list.
 * @index: node's index.
 * Return: 1 for success, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp1, *tmp2;

	if (!*head)
		return (-1);
	tmp1 = *head;
	if (index == 0)
	{
		*head = tmp1->next;
		free(tmp1);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp1 || !tmp2)
			return (-1);
		tmp1 = tmp1->next;
		i++;
	}
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	free(tmp2);
	return (1);
}
