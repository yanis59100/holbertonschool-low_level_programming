#include "stdio.h"
/**
  * _strpbrk - prints the consecutive caracters of the s1 that are in s2.
  * @s: source string
  * @accept: searching string
  *
  * Return: new string.
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int ptr1, ptr2;

	for (ptr1 = 0; *(s + ptr1); ptr1++)
	{
		for (ptr2 = 0; *(accept + ptr2); ptr2++)
		{
			if (*(s + ptr1) == *(accept + ptr2))
			{
				break;
			}
		}
		if (*(accept + ptr2) != '\0')
		{
			return (s + ptr1);
		}
	}
	return (0);
}
