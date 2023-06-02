#include "lists.h"

/**
 * list_len - returns the number of elements in list_t
 * @h: the node
 * Return: returns the number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
