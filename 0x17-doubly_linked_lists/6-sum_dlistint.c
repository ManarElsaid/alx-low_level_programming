#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of linked list
 * @head: the address of the head of the list
 * Return: the sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	if (head == NULL)
		sum = 0;

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}
