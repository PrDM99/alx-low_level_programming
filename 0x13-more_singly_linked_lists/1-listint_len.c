#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: a pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for(count = 0; h != NULL; count++, h = h->next);
	return (count);
}

