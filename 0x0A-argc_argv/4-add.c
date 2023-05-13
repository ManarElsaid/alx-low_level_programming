#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive number
 * @argc: number of arguments
 * @argv: numbers
 * Return: 1 at Error 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
		for (i = 0; i <= argc - 1; i++)
		{
			if (argv[i] >= 48 && argv[i] <= 97)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);
	return (0);
}
