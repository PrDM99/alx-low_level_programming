#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of the list
 * @head: pointer to a pointer of the head node
 *
 * Return: data (n) of the head node, 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *pop = *head;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	pop = *head;
	n = pop->n;
	*head = pop->next;
		free(pop);

		return (n);
}
