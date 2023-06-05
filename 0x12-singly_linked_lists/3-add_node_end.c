#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to the tail of the list_t
 * @head: pointer to te head node
 * @str: the string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t new_end = malloc(sizeof(list_t));

	list_t temp = *head;

	if (!new_end)
		return (NULL);
	new_end->str = strdup(str);
	new_end->len = _strlen(new_end->str);
	new_end->next = NULL;

	if (temp->next != NULL)
	{
		temp->next = temp;
	}
	else if (temp->next == NULL)
	{
		temp->next = new_end;
	}


	return (new_end);
}
