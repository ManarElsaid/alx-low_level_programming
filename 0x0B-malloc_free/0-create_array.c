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

	if (size == 0)
		return (NULL);
	else
	{
		p = malloc(size);
		*p = c;
		return (*p);
	}
}
