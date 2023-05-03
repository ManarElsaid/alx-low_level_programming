#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the pointer of thestring
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i <= c - 1; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
	}
}
