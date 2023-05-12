#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: first input
 * @src: second input
 * @n: number of bytes
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

