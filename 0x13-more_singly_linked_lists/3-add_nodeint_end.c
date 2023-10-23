#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to the head of the listint_t list
 * @n: integer value to ne addded to the new node
 * Return: New node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new_node;

	return (new_node);
}

