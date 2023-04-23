#include<stdio.h>

/**
 * main - entry point
 * Return: Always 0 "Success"
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && ch != 'q' && ch != 'e')
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

