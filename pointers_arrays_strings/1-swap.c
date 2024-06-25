#include <stdio.h>

/**
 * swap_int - check the code
 *
 * Descrption: function that swaps the values of two integers
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
