#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character
 * Return: returns first occurance of c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] == '\0'; i++)
	{
		if (s[i] == c)
			return (s[i + 1]);
	}

