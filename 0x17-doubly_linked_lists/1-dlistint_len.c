#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the list
 * Return: no. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
