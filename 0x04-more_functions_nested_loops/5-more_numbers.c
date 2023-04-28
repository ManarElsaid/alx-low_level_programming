#include "main.h"

/**
 * more_numbers - print numbers from 1 to 14 ten times
 */

void more_numbers(void)
{
	char ch, c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = '0'; ch <= '9'; ch++)
			_putchar(ch);
		for (c = '0'; c <= '4'; c++)
			_putchar('1' + 'c');
		_putchar("\n");
	}
}

