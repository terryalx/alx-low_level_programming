#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array to reverse
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int a;
	int b;

	for (a = 0; a < n / 2; a++)
	{
		b = a[a];
		a[a] = a[n - a - 1];
		a[n - a - 1] = b;
	}
}
