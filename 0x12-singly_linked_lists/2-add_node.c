#include "lists.h"
#include "string.h"

/**
 * add_node - adds new node to the beginning of the list_t
 * @head: the pointer to the new node
 * @str: the string
 * Return: on success the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_head = malloc(sizeof(list_t));

	if (!new_head)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = _strlen(new_head->str);
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
