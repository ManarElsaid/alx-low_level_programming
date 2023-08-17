#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the list
 * @n: the data of the node
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint new_node = malloc(sizeof(dlistint));

	new_node->data = n;
	if (!*head)
		return (NULL);
	new_node->next = *head;
	new_node->prev = Null;
	head = new_node;
	new_node->next->prev = new_node;
	return (head);
