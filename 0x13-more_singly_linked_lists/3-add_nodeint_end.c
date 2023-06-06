#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: pointer to the pointer to the first node
 * @n: the data of inserted node
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new_node || !*head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	while (temp != NULL)
	{
		temp = temp->next;
	}
	temp = new_node;
	return (new_node);
}

