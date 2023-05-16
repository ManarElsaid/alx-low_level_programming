#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - entry point
 * @str: the string
 * Return: returns a pointer to new string and NULL if failed
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(strlen(str) + 1 * sizeof(char));
	for (i = 0; i <= strlen(str); i++)
		s[i] = str[i];
	if (s == NULL)
		return (NULL);

	s[i] = '\0';
	return (s);
}
