#include "lists.h"

/**
 * list_len - number of elements in a list_t linked list
 * @h: linked list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t np = 0;

	while (h != NULL)
	{
		np++;
		h = h->next;
	}

	return (np);
}
