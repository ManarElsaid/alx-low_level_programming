#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of the node
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = new_node;
	}
	else
		*head = new_node;

	if (temp != NULL)
		new_node->prev = temp;
	return (new_node);
}
