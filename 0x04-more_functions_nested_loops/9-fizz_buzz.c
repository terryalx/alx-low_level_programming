#include <stdio.h>

/**
 * main - program prints 1 - 100
 * print Fizz for multiples of three
 * print Buzz for multiples of five
 * print FizzBuzz for multiples of both three and five
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0 && !(num % 5 == 0))
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && !(num % 3 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}


		if (num != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
