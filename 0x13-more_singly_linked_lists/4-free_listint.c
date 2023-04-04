#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: apointer to the first node in a list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	for (; head != NULL; head = ptr)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
