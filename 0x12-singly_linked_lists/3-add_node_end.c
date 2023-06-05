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
	list_t *new_node = malloc(sizeof(list_t));

	list_t *temp;

	temp = *head;
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
