#include "lists.h"

/**
 * free_list - delets the list
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

