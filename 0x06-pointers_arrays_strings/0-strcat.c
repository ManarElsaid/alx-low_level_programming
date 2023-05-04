#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: first string
 * @src: seconed string
 * Return: returns concatinated array
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


