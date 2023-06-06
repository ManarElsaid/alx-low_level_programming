#include "lists.h"

/**
 * free_list - delets the list
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	head = NULL;
}

