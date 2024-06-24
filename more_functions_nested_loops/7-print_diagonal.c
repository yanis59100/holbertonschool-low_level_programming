#include "main.h"

/**
 * print_diagonal - function to print line symbols
 * @n : integer value
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (y != x)
				_putchar(' ');
				else if (y == x)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	_putchar('\n');
}
