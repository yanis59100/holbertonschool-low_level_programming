#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */
int main(void)
{
	int x = 0;
	int y;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
		if (x < y)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (x < 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
		y++;
	}
	x++;
	}
	putchar('\n');
	return (0);
}
