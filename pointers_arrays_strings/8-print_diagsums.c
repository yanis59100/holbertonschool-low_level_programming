#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */

void print_diagsums(int *a, int size)
{
	int ptr1, ptr2, ptr3;

	ptr2 = ptr3 = 0;
	for (ptr1 = 0; ptr1 < (size * size); ptr1 += size + 1)
		ptr2 += a[ptr1];
	for (ptr1 = size - 1; ptr1 < (size * size - 1); ptr1 += size - 1)
		ptr3 += a[ptr1];
	printf("%d, %d\n", ptr2, ptr3);
}
