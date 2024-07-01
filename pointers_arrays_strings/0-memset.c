#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 *
 * @s: pointer
 * @b: char
 * @n: unsigned int
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int function;

	for (function = 0; n > 0; function++);
	{
		s[function] = b;
		n -= 1;
	}
	return (s);
}
