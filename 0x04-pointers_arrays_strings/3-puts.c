#include "main.h"
/**
 * _puts - returns the length of a string.
 * @str: input string.
 * Return: length of a string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
