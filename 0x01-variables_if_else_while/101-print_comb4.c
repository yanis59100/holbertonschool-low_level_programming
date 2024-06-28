#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int z;
	int e;

	for (a = '0'; a <= '9'; a++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if (a < z && z < e)
				{
					putchar(a);
					putchar(z);
					putchar(e);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
