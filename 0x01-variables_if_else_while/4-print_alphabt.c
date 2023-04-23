#include<stdio.h>

/**
 * main - entry point
 * Return: Always 0 "Success"
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && != 'q' && != 'e')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

