#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: seconed string
 * @n: number of bytes
 * Return: returns NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (len1 != '\0')
		len1++;
	while (len2 != '\0')
		len2++;
	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
