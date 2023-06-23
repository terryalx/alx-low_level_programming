#include <stdio.h>

/**
 * main - largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143, num, div;
	div = 2;

	while (num < (prime / div))
	{
		if ((prime % div) == 0)
		{
			prime /= div;
			continue;
		}

		for (num = 3; num < (prime / 2); num += 2)
		{
			if ((prime % num) == 0)
				prime /= num;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
