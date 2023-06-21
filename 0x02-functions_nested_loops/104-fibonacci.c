#include <stdio.h>

/**
 * main -> 98 Fibonacci numbers
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int num0, num1, num2, num3, num4, num5, num6;

	num1 = 1;

	num2 = 2;

	printf("%lu", num1);

	for (num0 = 1; num0 < 91; num0++)
	{
		printf(", %lu", num2);
		num2 = num2 + num1;
		num1 = num2 - num1;
	}

	num3 = num1 / 1000000000;

	num4 = num1 % 1000000000;

	num5 = num2 / 1000000000;

	num6 = num2 % 1000000000;

	for (num0 = 92; num0 < 99; ++num0)
	{
		printf(", %lu", num5 + (num6 / 1000000000));
		printf("%lu", num6 % 1000000000);
		num5 = num5 + num3;
		num3 = num5 - num3;
		num6 = num6 + num4;
		num4 = num6 - num4;
	}

	printf("\n");

	return (0);
}
