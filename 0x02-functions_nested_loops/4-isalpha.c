#include "main.h"

/**
 * _isalpha - checks if c is a letter
 * @c: checks input of function
 * Return: returns 1 if c is letter otherwise always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
