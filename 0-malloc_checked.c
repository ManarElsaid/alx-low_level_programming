#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: returns 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *)malloc(sizeof(b));

	if (p == NULL)
		return (98);
	return (0);
}
