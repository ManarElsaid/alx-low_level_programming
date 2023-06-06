#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at agiven index
 * @head: pointer to pointer to the head node
 * @idx: the index
 * @n: the data
 * Return: the address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int count = 0;

	if (!new_node)
		return (NULL);
	new_node->n = n;

	while (count != (idx - 1))
	{
		count++;
		temp = temp->next;
	}
	new_node = temp;
	new_node->next = temp->next;

	return (new_node);
}
