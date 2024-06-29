#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: array of integer
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int i;
	int inst[1000];

	for (i = 0; i < n; i++)
		inst[i] = a[n - i - 1];
	for (i = 0; i < n; i++)
		a[i] = inst[i];
}
