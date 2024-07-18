#include "main.h"
#include <stdio.h>

/**
 * *cap_string - change all upper to lower
 * @c: string
 * Return: string
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (i == 0 && c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		if (c[i + 1] >= 97 && c[i + 1] <= 122)
		{
			if (c[i] == ' ' || c[i] == '.' || c[i] == ',' || c[i] == ';' || c[i] == '}')
				c[i + 1] -= 32;
			if (c[i] == '!' || c[i] == 34 || c[i] == '?' || c[i] == '\t')
				c[i + 1] -= 32;
			if (c[i] == '\n' || c[i] == '(' || c[i] == ')' || c[i] == '{')
				c[i + 1] -= 32;
		}
		i++;
	}
	return (c);
}
