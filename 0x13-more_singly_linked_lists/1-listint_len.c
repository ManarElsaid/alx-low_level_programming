#include "lists.h"

/**
 * listint_len - prints the number of elements in the list
 * @h: pointer to the first element
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
