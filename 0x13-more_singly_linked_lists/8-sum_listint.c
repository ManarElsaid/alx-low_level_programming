#include "lists.h"

/**
 * sum_listint - add the data of the list
 * @head: pointer to the head node
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
