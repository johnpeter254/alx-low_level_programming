#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees list and sets thr head to NULL
 * @head: Pointer to pointer to head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;

		free(temp);
	}

	*head = NULL;
}
