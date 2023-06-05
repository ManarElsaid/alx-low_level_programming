#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: the string
 * Return: returns the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}

/**
 * print_list - prints the elements of lists_t list
 * @h: the list data
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
