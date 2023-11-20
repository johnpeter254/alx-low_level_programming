#include "lists.h"

/**
 * sum_listint - Returns sum of all data in linked list
 * @head: pointer to head of listint_t
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
