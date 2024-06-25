#include <stdio.h>

/**
 * swap_int - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int a, b;
	a = 98;
	b = 42;
 	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
}
