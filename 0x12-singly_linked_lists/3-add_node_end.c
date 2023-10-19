#include "lists.h"
/**
 * add_node_end - adds node to the end of the list
 * @head: head of the node
 * @str: string
 * Return: adress of the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
