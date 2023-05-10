#include "main.h"

/**
 * _puts_recursion - prints astring followed by a new line
 * @s: input of the function
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s[i]);
	}
}


