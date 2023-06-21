#include <stdio.h>

/**
 * main - wc -l first 50 Fibonacci numbers and new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num1, num2, num3, new;

	num2 = 1;
	num3 = 2;

	for (num1 = 1; num1 <= 50; ++num1)
	{
		if (num2 != 20365011074)
		{
			printf("%ld, ", num2);
		} else
		{
			printf("%ld\n", num2);
		}

		new = num2 + num3;

		num2 = num3;

		num3 = new;
	}

	return (0);
}
