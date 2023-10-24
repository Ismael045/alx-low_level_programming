#include"lists.h"
/**
 * pop_listint - Deletes the head of a node of a listint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: data of thr deleted head node,or 0 if the list is empty
 */


int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = 0;

	if (*head == NULL)

		return (0);


	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);


	return (data);

}



