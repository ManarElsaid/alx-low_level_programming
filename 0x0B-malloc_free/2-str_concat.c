#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: seconed string
 * Return: returns concatenated strings ,NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s = malloc(((strlen(s1) + strlen(s2)) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (j = 0; j < strlen(s2); j++)
		s[strlen(s1) + j] = s2[j];
	s[strlen(s1) + j] = '\0';
	return (s);
}
