#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int x = 2;
	long int y = 1, z = 2;
	long int a;

	printf("%lu, ", y);
	while (x <= 50)
	{
		if (x == 50)
		{
			printf("%lu\n", z);
		}
		else
		{
			printf("%lu, ", z);
		}

		a = z;
		z += y;
		y = a;
		x++;
	}

	return (0);
}
