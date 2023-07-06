#include "main.h"

/**
 * check - checks for prime numbers
 * @n: the number
 * @l: the loop
 * Return: 1 if it is a prime number otherwise 0
 */

int check(int n, int l)
{
	if (n % l == 0 && l < n)
		return (0);
	return (1);
}

/**
 * is_prime_number -> 1 integer = prime number, otherwise return 0.
 * @n: the number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	
	if (n == 1)
		return (0);

	return (check(n, 2));
}
