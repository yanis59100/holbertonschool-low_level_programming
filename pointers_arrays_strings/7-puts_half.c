#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 != 0)
			len++;

		for (str /= 2; str[len] != '\0'; len++)
		{
			_putchar(str[len]);
		}
	}
		_putchar('\n');
}
