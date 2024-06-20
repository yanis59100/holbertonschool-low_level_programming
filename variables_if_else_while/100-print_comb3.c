#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */
void main(void)
{
	int x = '0';
	int y;

	while (x <= '9')
	{
		y = '0';
		while (y <= '9')
		{
		if (x < y)
		{
			putchar(x);
			putchar(y);
			if (x != '8' || (x == '8' && y != '9'))
			putchar(',');
			putchar(' ');
		}
		y++;
	}
	x++;
	}
	putchar('\n');
}
