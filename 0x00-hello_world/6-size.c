#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %c\n byte(s)", sizeof(char));
	printf("Size of an int: %d\n byte(s)", sizeof(int));
	printf("Size of a long int: %ld\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %lld\n byte(s)", sizeof(long long int));
	printf("Size of a float: %f\n byte(s)", sizeof(float));
	return (0);
}
