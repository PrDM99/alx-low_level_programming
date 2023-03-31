#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: This is the linked listi
 */

void free_list(list_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list_t *old;

		old = head;
		free(old->str);
		free(old);
		head = head->next;
	}
}
