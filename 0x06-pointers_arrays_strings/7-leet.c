#include "main.h"

/**
 * leet - encode ino 1337
 * @str: input value
 * Return: str
 */

char *leet(char *str)
{
	int i, j;

	s1[] = "aAeEoOtTlL";
	s2[] = "4433007711";

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] == s2[j];
		}
	}
	return (str);
}
