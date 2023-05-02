#include "main.h"

/**
 * puts_half - prints the last half of string
 * @str: input of the function
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i++)
			_putchar(str[i]);
	}

	else if (len % 2 == 1)
	{
		for (i = (len + 1) / 2; i <= len - 1; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
