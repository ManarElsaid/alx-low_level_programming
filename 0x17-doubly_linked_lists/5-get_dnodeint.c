#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer tor the head of the node
 * @index: index of the node we want to return
 * Return: nth node or Null if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		while (index != 0)
		{
			temp = temp->next;
			index--;
		}
	}

	return (temp);
}
