#include "lists.h"
/**
 * free_listint2 - frees alistint_t list and sets head to NULL.
 * @head: pointer to the head of a linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;



	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}

