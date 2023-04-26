#include "main.h"
 /**
  * print_sign - check if n is positive or negative or zero
  * @n: input for the function
  * Return: 1 if +, 0 if 0 and -1 if - (Success)
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

