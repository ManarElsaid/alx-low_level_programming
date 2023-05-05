#include "main.h"

/**
 * cap_string -  captalizes string
 * @s: the string to be capitalized
 * Return: returns s
 */

char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			i++;
		}
		else if (s[i] == ' ' ||
				s[i] == '\t' ||
				s[i] == '\n' ||
				s[i] == ',' ||
				s[i] == ';' ||
				s[i] == '.' ||
				s[i] == '!' ||
				s[i] == '?' ||
				s[i] == '"' ||
				s[i] == '(' ||
				s[i] == ')' ||
				s[i] == '{' ||
				s[i] == '}')
			i++;
	}
	return (s);
}
