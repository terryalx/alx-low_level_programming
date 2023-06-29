#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array to reverse
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int sp;
	int rp;

	for (sp = 0; sp < n / 2; sp++)
	{
		rp = a[sp];
		a[sp] = a[n - sp - 1];
		a[n - sp - 1] = rp;
	}
}
