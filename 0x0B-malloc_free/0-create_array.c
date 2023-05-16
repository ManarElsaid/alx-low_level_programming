#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: first input of function
 * @c: seconed input
 * Return: returns null at size 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0 || p == NULL)
		return (NULL);
	p = malloc((size + 1) * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*p = c[i];
		return (p);
	}
}
