#include <stdio.h>

/**
 * main -  print the result of the multiplication
 * @argc: number of arguments
 * @argv: list
 * Return: 1 at error and otherwise 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
}
