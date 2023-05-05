#include "main.h"

/**
 * rot13 - encodes into rot13
 * @str: input value
 * Return: return str
 */

char *rot13(char *str)
{
	int i, j;

	char s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2 = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
	}
	return (str);
}
