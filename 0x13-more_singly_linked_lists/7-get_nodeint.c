#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first node of the list
 * @index: node to be returned, starting at 0
 *
 * Return: NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *insert = head;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (; x < index && insert != NULL;)
		x++;

	insert = insert->next;
	return (insert);
}
