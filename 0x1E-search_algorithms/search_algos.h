#ifndef _SEARCH_ALGOS
#define _SEARCH_ALGOS

#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
