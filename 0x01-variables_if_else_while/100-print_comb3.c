#include<stdio.h

/**
 * main - entry point
 * Return: Always 0 "Success"
 */

int main(void)
{
	int f_digit, s_digit;

	for (f_digit = 48 ; f_digit <= 57 ; f_digit++)
	{
		for (s_digit = 48; s_digit <= 57 && s_digit > f_digit; s_digit++)
		{
			if (s_digit != 9 && f_digit != 8)
			{
				putchar(f_digit);

				putchar(s_digit);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
