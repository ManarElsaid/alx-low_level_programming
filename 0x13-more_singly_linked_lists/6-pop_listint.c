#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the pointer to the head node
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
