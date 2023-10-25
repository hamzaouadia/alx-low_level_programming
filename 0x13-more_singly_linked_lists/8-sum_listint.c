#include "lists.h"

/**
 * sum_listint - returns the sum of all data in listint_t list.
 * @head: pointer to the first node in the listint_t list.
 * Return: 0 if the list is empty.
 *         the sum of data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
