#include <stdio.h>
#define YANIS 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0, z = 1, e = 0, r = 2;
	unsigned long int q, s, d;
	int w;

	printf("%lu, %lu, ", z, r);
	for (w = 2; w < 98; w++)
	{
		if (z + r > YANIS || e > 0 || a > 0)
		{
			q = (z + r) / YANIS;
			s = (z + r) % YANIS;
			d = a + e + q;
			a = e, e = d;
			z = r, r = s;
			printf("%lu%010lu", e, r);
		}
		else
		{
			s = z + r;
			z = r, r = s;
			printf("%lu", r);
		}
		if (w != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
