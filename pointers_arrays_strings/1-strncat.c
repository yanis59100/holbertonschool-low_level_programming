#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concat dest + src
 * @dest: dest string
 * @src: adding string
 * @n: integer
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest1 = 0;
	int src1 = 0;
	int i;

	while (dest[dest1] != '\0')
		dest1++;
	while (src[src1] != '\0')
		src1++;
	n = (n > src1) ? src1 : n;
	for (i = 0; i < n; i++)
		*(dest + dest1 + i) = src[i];
	return (dest);
}
