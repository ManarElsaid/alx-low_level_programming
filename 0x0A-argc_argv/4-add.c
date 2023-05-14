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

	int i;

	for (i = 1; i <= argc - 1; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Eirror\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
