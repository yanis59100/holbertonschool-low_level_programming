#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
