#include "main.h"

/**
 * _isdigit - checks for the digit
 * @c: input of the function
 * Return: returns 1 if 'c' is a digit otherwise always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
