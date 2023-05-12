#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first input of the function
 * @src: seconed input of the function
 * @n: third input of the function
 * Return: returns destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
