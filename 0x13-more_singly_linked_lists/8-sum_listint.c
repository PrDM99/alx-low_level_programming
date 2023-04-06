#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all data (n)
 * @head: pointer to the first node of the list
 *
 * Return: sum , 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	for (; tmp != NULL; tmp = tmp->next)
		sum += tmp->n;
	return (sum);
}

