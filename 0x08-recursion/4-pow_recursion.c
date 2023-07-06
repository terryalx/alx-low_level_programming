#include "main.h"

/**
 * _pow_recursion -> value of x raised to the power of y
 * @x: base
 * @y: power
 * Return: x ** y
 */

int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
	{
		pow *=  x * _pow_recursion(x, y - 1);
	}
	
	return (pow);
}
