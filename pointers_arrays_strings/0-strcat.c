#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int chaine1 = 0, chaine2;

	while (dest[chaine1])
	{
		chaine1++;
	}

	for (chaine2 = 0; src[chaine2] != 0; chaine2++)
	{
		dest[chaine1] = src[chaine2];
		chaine1++;
	}
	dest[chaine1] = '\0';
	return (dest);
}
