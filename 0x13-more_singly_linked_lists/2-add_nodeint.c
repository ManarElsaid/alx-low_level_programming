#include "lists.h"

/**
 * add_nodeint - add node ata the beginning of the list
 * @head: pointer to pointer to the first element
 * @n: data of the new node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = head;

	head = new_node;
	return (new_node);
}
