#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the linked list
 * @head:a fisrt pointer to the first node in the list
 * @n: an integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;
	size_t count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
	old = *head;
	for (count = 0; old->next != NULL; count++, old = old->next)
	;
	
	old->next = new;
	}
	return (new);
}
