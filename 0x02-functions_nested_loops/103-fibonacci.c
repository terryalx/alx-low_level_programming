#include <stdio.h>

/**
 * main -> num_sum of the even num
 * Return: 0 (Success)
 */

int main(void)
{
	int holder;

	unsigned long int num1, num2, swap, num_sum;

	num1 = 1;
	num2 = 2;
	num_sum = 0;

	for (holder = 1; holder <= 33; ++holder)
	{
		if (num1 < 4000000 && (num1 % 2) == 0)
		{
			num_sum = num_sum + num1;
		}

		swap = num1 + num2;
		num1 = num2;
		num2 = swap;
	}

	printf("%lu\n", num_sum);

	return (0);
}
