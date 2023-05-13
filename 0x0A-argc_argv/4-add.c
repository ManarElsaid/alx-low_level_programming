#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number
 * @argc: number of arguments
 * @argv: numbers
 * Return: 1 at Error 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
