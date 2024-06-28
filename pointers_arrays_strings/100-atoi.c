#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * number of characters.
 * You need to take into account all -/+ signs before the number.
 * If there are no numbers in the string, return 0.
 * No need to check for overflow.
 * Not allowed to hard-code special values.
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int len = 0;

	if (s[0] == '-')
	{
		sign = -1;
		len++;
	}
	if (s[0] == '+')
	{
		len++;
	}
	while (s[len] != '\0')
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			result = result * 10 + (s[len] - '0');
		}
		else
		{
			break;
		}
		len++;
	}
	return (sign * result);
}
