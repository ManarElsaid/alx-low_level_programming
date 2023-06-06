#include "lists.h"

/*
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first element
 * Return: returns the number vof nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		count = 0;
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
