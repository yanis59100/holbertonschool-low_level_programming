#include "main.h"

/**
 * print_triangle - function to print symbols in triangle
 *
 * @size : integer value
 */
void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y >= 1; y--)
			{
				if (x < y)
					_putchar(' ');
				else
					_putchar('#');
			}
				_putchar('\n');
		}
	}
	else if (size <= 0)
	_putchar('\n');
}
