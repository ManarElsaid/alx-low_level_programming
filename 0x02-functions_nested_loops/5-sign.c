#include "main.h"

/**
 * print_sign - checks the sign of n
 * @n: takes integer input for function
 * Return: returns 1 if +,0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n <= 0)
	{
		_putchar('-');
		return (-1);
	}
}

