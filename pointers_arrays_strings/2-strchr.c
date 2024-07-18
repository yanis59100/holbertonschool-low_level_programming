#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int ptr;

	for (ptr = 0; s[ptr] >= '\0'; ptr++)
	{
		if (s[ptr] == c)
			return (s + ptr);
	}
	return (NULL);
}
