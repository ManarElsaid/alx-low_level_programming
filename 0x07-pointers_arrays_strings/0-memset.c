#include "main.h"

/**
 * _memset - fills n bytes of memory with b
 * @s: pointer
 * @b: constant byte
 * @n: number of integer
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
