#include "main.h"

/**
 * _abs - computes the absolute value of n
 * @n: takes in integer type of input
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
