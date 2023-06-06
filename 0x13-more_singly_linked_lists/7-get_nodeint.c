#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the  linked list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: the nth node on success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp;

	temp = head;

	while (count != index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
