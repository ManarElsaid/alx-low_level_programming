#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of array
 * @size: number of bytes
 * Return: returns NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
