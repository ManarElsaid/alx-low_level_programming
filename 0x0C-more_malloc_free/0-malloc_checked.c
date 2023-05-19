#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: returns 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *)malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
