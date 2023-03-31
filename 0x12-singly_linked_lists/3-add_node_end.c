#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: first node
 * @str: string to be stored in node
 *
 * Return: address of new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}
