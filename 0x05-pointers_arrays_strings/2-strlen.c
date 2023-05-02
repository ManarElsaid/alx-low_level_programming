#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: input of the function
 * Return: returns the lenght of the string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);
}
