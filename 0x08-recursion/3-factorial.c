#include "main.h"

/**
 * factorial -> factorial of a given number.
 * @n: number
 * Return: the factorial of the number
 */

int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
	}
	else
	{
		fact *= n * factorial(n - 1);
	}
	return (fact);
}
