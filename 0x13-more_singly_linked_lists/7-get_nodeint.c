#include "lists.h"
/**
 * get_nodeint_at_index - Returns thr nth node of a listint_t list
 * @index: the index of the node to retrieve,starting at 0
 * @head: pointer to the head of the linked list
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
