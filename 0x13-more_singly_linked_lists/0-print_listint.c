#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: A pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++, h = h->next)
	printf("%d\n", h->n);
	return (count);
}
