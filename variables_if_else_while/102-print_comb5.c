#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int z;

	for (a = 0; a < 98; a++)
	{
		for (z = a + 1; z < 99; z++)
		{
			putchar((a / 10) + 0);
			putchar((a % 10) + 0);
			putchar(' ');
			putchar((z / 10) + 0);
			putchar((z % 10) + 0);
			if (a != 98 || z != 99)
			continue;
			putchar(','),
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
