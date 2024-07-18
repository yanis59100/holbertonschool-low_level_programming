#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copy string
 * @dest: dest string
 * @src: source string
 * @n: integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_length = 0;
	int i;

	while (src[src_length] != '\0')
		src_length++;

	for (i = 0; i < n; i++)
		dest[i] = (i >= src_length) ? '\0' : src[i];
	return (dest);
}
