#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int len = 0;
	int lan;

	if (_strlen(str) % 2 != 0)
	{
		len = len + 1;
	}
	for ( lan = (_strlen(str) + len) / 2; lan < _strlen(str); lan++)
	{
		_putchar(str[lan]);
	}
	_putchar(10);
}
