#include "main.h"

/**
 * _strncat - concatinates two strings
 * @dest: first string
 * @src: seconed string
 * @n: third input of the function
 * Return: returns concatinating string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && j != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
