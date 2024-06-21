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

	for (a = '0'; a < 100; a++)
	{
		for (z = a + 1; z < 100; z++)
		{
			if (a < z)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);

				if (a != 98 || z != 99)
				{
					putchar(','),
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
