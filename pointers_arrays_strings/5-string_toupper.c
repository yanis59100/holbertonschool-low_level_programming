#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - change all lawer to upper
 * @c: string
 * Return: string
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		i++;
	}
	return (c);
}
