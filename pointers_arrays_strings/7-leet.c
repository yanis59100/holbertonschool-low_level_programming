#include "main.h"
#include <stdio.h>

/**
 * *leet - leet to 1337
 * @c: string
 * Return: string
 */

char *leet(char *c)
{
	int i = 0, j;
	char ref[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char chg[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (c[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == ref[j])
				c[i] = chg[j];
		}
		i++;
	}
	return (c);
}
