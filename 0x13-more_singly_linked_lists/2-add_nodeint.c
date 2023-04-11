#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: first node
 * @n: An element in a linked list
 *
 * Return: address of the new element, NULL if code fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}