#include <stdio.h>

/**
  * _strspn - gets the length of a prefix substring
 * @s: segment to compare bytes from
 * @accept: string of bytes to compare with
 * Return: number of bytes in segment s which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ptr1, ptr2;
	unsigned int ptr3 = 0;

	for (ptr1 = 0; s[ptr1] != '\0'; ptr1++)
	{
		if (s[ptr1] == ' ')
			break;
		for (ptr2 = 0; accept[ptr2] != 0; ptr2++)
		{
			if (s[ptr1] == accept[ptr2])
				ptr3++;
		}
	}
	return (ptr3);
}
