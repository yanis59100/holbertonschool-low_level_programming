#include "stdio.h"
/**
 * _puts - returns the length of a string.
 * @str: input string.
 * Return: length of a string.
 */
void _puts(char *str)
{
	int x;

	for (x = 0; x >= 0; x++)
		_putchar('\n');
	_putchar(str[x]);
}
