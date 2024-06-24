#include "main.h"

/**
 * print_line - function to print line
 * @n : integer value
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
