#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv[];
	printf("%d\n", argc);
	return (0);
}
