#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input of the function
 * Return: returns len
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
		len++;
	}
		return (len);
}
