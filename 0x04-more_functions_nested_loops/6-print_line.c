#include "main.h"

/**
 * print_line - print line
 * @n: input of the function
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar("\n");
	else
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	_putchar("\n");
}
