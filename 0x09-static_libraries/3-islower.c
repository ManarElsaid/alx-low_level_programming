#include "main.h"

/**
 * _islower - checks if character is lower case
 * @c: checks input of function
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
