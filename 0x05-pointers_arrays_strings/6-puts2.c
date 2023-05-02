#include "main.h"

/**
 * puts2 - prints every other char of string
 * @str: the pointer of a string
 */
void puts2(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
