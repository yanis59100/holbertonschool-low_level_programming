#include "stdio.h"
/**
 * _puts - returns the length of a string.
 * @str: input string.
 * Return: length of a string.
 */
void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '/0')
		x++;
	_ptuchar('\n');
}
