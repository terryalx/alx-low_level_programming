#include <stdio.h>

/**
 * main - computes sum3 of all
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int sum1, sum2, sum3;

	int n;

	sum1 = 0;
	sum2 = 0;
	sum3 = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3) == 0)
		{
			sum1 = sum1 + n;
		} else if ((n % 5) == 0)
		{
			sum2 = sum2 + n;
		}
	}
	sum3 = sum1 + sum2;

	printf("%lu\n", sum3);

	return (0);
}
